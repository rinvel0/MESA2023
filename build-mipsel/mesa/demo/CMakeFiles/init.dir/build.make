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

# Include any dependencies generated for this target.
include mesa/demo/CMakeFiles/init.dir/depend.make

# Include the progress variables for this target.
include mesa/demo/CMakeFiles/init.dir/progress.make

# Include the compile flags for this target's objects.
include mesa/demo/CMakeFiles/init.dir/flags.make

mesa/demo/CMakeFiles/init.dir/initramfs/main.c.o: mesa/demo/CMakeFiles/init.dir/flags.make
mesa/demo/CMakeFiles/init.dir/initramfs/main.c.o: ../mesa/demo/initramfs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object mesa/demo/CMakeFiles/init.dir/initramfs/main.c.o"
	cd /home/codrin/mesa/build-mipsel/mesa/demo && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/init.dir/initramfs/main.c.o   -c /home/codrin/mesa/mesa/demo/initramfs/main.c

mesa/demo/CMakeFiles/init.dir/initramfs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/init.dir/initramfs/main.c.i"
	cd /home/codrin/mesa/build-mipsel/mesa/demo && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/mesa/demo/initramfs/main.c > CMakeFiles/init.dir/initramfs/main.c.i

mesa/demo/CMakeFiles/init.dir/initramfs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/init.dir/initramfs/main.c.s"
	cd /home/codrin/mesa/build-mipsel/mesa/demo && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/mesa/demo/initramfs/main.c -o CMakeFiles/init.dir/initramfs/main.c.s

# Object files for target init
init_OBJECTS = \
"CMakeFiles/init.dir/initramfs/main.c.o"

# External object files for target init
init_EXTERNAL_OBJECTS =

mesa/demo/init: mesa/demo/CMakeFiles/init.dir/initramfs/main.c.o
mesa/demo/init: mesa/demo/CMakeFiles/init.dir/build.make
mesa/demo/init: mesa/demo/CMakeFiles/init.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable init"
	cd /home/codrin/mesa/build-mipsel/mesa/demo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/init.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mesa/demo/CMakeFiles/init.dir/build: mesa/demo/init

.PHONY : mesa/demo/CMakeFiles/init.dir/build

mesa/demo/CMakeFiles/init.dir/clean:
	cd /home/codrin/mesa/build-mipsel/mesa/demo && $(CMAKE_COMMAND) -P CMakeFiles/init.dir/cmake_clean.cmake
.PHONY : mesa/demo/CMakeFiles/init.dir/clean

mesa/demo/CMakeFiles/init.dir/depend:
	cd /home/codrin/mesa/build-mipsel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codrin/mesa /home/codrin/mesa/mesa/demo /home/codrin/mesa/build-mipsel /home/codrin/mesa/build-mipsel/mesa/demo /home/codrin/mesa/build-mipsel/mesa/demo/CMakeFiles/init.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mesa/demo/CMakeFiles/init.dir/depend

