# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/cmake

# The command to remove a file.
RM = /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codrin/mesa

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codrin/mesa/build-mipsel

# Utility rule file for meba_ocelot_pcb121_static_target.

# Include the progress variables for this target.
include meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/progress.make

meba/CMakeFiles/meba_ocelot_pcb121_static_target: meba/libmeba_ocelot_pcb121.a


meba/libmeba_ocelot_pcb121.a: meba/libmeba_only_ocelot_pcb121.a
meba/libmeba_ocelot_pcb121.a: mepa/libmepa_ocelot_pcb121.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Bundling meba_ocelot_pcb121_static"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-ar -Ms < /home/codrin/mesa/build-mipsel/meba/meba_ocelot_pcb121_static.ar

meba_ocelot_pcb121_static_target: meba/CMakeFiles/meba_ocelot_pcb121_static_target
meba_ocelot_pcb121_static_target: meba/libmeba_ocelot_pcb121.a
meba_ocelot_pcb121_static_target: meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/build.make

.PHONY : meba_ocelot_pcb121_static_target

# Rule to build all files generated by this target.
meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/build: meba_ocelot_pcb121_static_target

.PHONY : meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/build

meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/clean:
	cd /home/codrin/mesa/build-mipsel/meba && $(CMAKE_COMMAND) -P CMakeFiles/meba_ocelot_pcb121_static_target.dir/cmake_clean.cmake
.PHONY : meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/clean

meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/depend:
	cd /home/codrin/mesa/build-mipsel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codrin/mesa /home/codrin/mesa/meba /home/codrin/mesa/build-mipsel /home/codrin/mesa/build-mipsel/meba /home/codrin/mesa/build-mipsel/meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : meba/CMakeFiles/meba_ocelot_pcb121_static_target.dir/depend

