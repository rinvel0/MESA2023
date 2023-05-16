#!/usr/bin/env ruby

# Copyright (c) 2004-2020 Microchip Technology Inc. and its subsidiaries.
# SPDX-License-Identifier: MIT

require 'pp'
require 'yaml'
require 'open3'
require 'optparse'

options = {}
OptionParser.new do |opts|
    opts.banner = "Usage: capdump.rb [options] libraries..."

    opts.on("-c", "--capability-header [file]", "Capability header file to parse") do |h|
        options[:hdr] = h
    end

    opts.on("-C", "--capdumper-exec [file]", "Capability dumper executable") do |h|
        options[:exe] = h
    end

    opts.on("-o", "--output [file]", "Where to write the database") do |o|
        options[:out] = o
    end

    opts.on("-h", "--help", "This message") do |v|
        puts opts
        exit
    end

end.parse!

if options[:hdr].nil?
    puts "No header specified"
    exit
end

if options[:exe].nil?
    puts "No capability dumper executable"
    exit
end

if ARGV.size == 0
    puts "No libraries specified"
    exit
end


CAPS = []
enum_val = 0
File.readlines(options[:hdr]).each do |l|
    cap_name = ""
    case l
    when /(MESA_CAP_\w+)\s*=\s*(\d+)/
        enum_val = $2.to_i
        cap_name = $1
        CAPS << [cap_name, enum_val]
    when /(MESA_CAP_\w+)/
        enum_val += 1
        cap_name = $1
        CAPS << [cap_name, enum_val]
    end

end

CAP_DB = {}

ARGV.each do |lib|
    base_lib = File.basename(lib)
    CAP_DB[base_lib] = []

    caps = CAPS.clone
    caps_size_old = 0

    while caps.size > 0 and caps_size_old != caps.size
        caps_size_old = caps.size
        c = "#{options[:exe]} #{lib} #{caps.collect{|x| x[1]}.join(" ")}"

        stdout_str, stderr_str, status = Open3.capture3(c)

        stdout_str.split("\n").each do |l|
            o_cap = l.split.map{|x| x.to_i}

            if caps.size > 0 and caps[0][1] == o_cap[0]
                cap = caps.shift
                puts "%-40s %-60s = %d" % [base_lib, "#{cap[0]}(#{cap[1]})", o_cap[1]]
                CAP_DB[base_lib] << { :str => cap[0], :int => cap[1], :val => o_cap[1], :chip => base_lib }
            end
        end

        if status.to_i != 0
            cap = caps.shift
            puts "%-40s %-60s = <unknown>" % [base_lib, "#{cap[0]}(#{cap[1]})"]
            CAP_DB[base_lib] << { :str => cap[0], :int => cap[1], :val => nil, :chip => base_lib }
        end

    end
end

if options[:out]
    File.write(options[:out], YAML.dump(CAP_DB))
end

