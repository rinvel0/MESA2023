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
include mepa/CMakeFiles/mepa_servalt_common.dir/depend.make

# Include the progress variables for this target.
include mepa/CMakeFiles/mepa_servalt_common.dir/progress.make

# Include the compile flags for this target's objects.
include mepa/CMakeFiles/mepa_servalt_common.dir/flags.make

mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o: mepa/CMakeFiles/mepa_servalt_common.dir/flags.make
mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o: ../mepa/common/src/phy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o"
	cd /home/codrin/mesa/build-mipsel/mepa && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o   -c /home/codrin/mesa/mepa/common/src/phy.c

mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.i"
	cd /home/codrin/mesa/build-mipsel/mepa && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/mepa/common/src/phy.c > CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.i

mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.s"
	cd /home/codrin/mesa/build-mipsel/mepa && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/mepa/common/src/phy.c -o CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.s

# Object files for target mepa_servalt_common
mepa_servalt_common_OBJECTS = \
"CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o"

# External object files for target mepa_servalt_common
mepa_servalt_common_EXTERNAL_OBJECTS =

mepa/libmepa_servalt_common.a: mepa/CMakeFiles/mepa_servalt_common.dir/common/src/phy.c.o
mepa/libmepa_servalt_common.a: mepa/CMakeFiles/mepa_servalt_common.dir/build.make
mepa/libmepa_servalt_common.a: mepa/CMakeFiles/mepa_servalt_common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libmepa_servalt_common.a"
	cd /home/codrin/mesa/build-mipsel/mepa && $(CMAKE_COMMAND) -P CMakeFiles/mepa_servalt_common.dir/cmake_clean_target.cmake
	cd /home/codrin/mesa/build-mipsel/mepa && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mepa_servalt_common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mepa/CMakeFiles/mepa_servalt_common.dir/build: mepa/libmepa_servalt_common.a

.PHONY : mepa/CMakeFiles/mepa_servalt_common.dir/build

mepa/CMakeFiles/mepa_servalt_common.dir/clean:
	cd /home/codrin/mesa/build-mipsel/mepa && $(CMAKE_COMMAND) -P CMakeFiles/mepa_servalt_common.dir/cmake_clean.cmake
.PHONY : mepa/CMakeFiles/mepa_servalt_common.dir/clean

mepa/CMakeFiles/mepa_servalt_common.dir/depend:
	cd /home/codrin/mesa/build-mipsel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codrin/mesa /home/codrin/mesa/mepa /home/codrin/mesa/build-mipsel /home/codrin/mesa/build-mipsel/mepa /home/codrin/mesa/build-mipsel/mepa/CMakeFiles/mepa_servalt_common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mepa/CMakeFiles/mepa_servalt_common.dir/depend

