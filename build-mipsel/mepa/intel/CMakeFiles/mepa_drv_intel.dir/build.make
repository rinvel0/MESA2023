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
include mepa/intel/CMakeFiles/mepa_drv_intel.dir/depend.make

# Include the progress variables for this target.
include mepa/intel/CMakeFiles/mepa_drv_intel.dir/progress.make

# Include the compile flags for this target's objects.
include mepa/intel/CMakeFiles/mepa_drv_intel.dir/flags.make

mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o: mepa/intel/CMakeFiles/mepa_drv_intel.dir/flags.make
mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o: ../mepa/intel/phy_driver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o   -c /home/codrin/mesa/mepa/intel/phy_driver.c

mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mepa_drv_intel.dir/phy_driver.c.i"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/mepa/intel/phy_driver.c > CMakeFiles/mepa_drv_intel.dir/phy_driver.c.i

mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mepa_drv_intel.dir/phy_driver.c.s"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/mepa/intel/phy_driver.c -o CMakeFiles/mepa_drv_intel.dir/phy_driver.c.s

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o: mepa/intel/CMakeFiles/mepa_drv_intel.dir/flags.make
mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o: ../mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o   -c /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.i"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c > CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.i

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.s"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c -o CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.s

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o: mepa/intel/CMakeFiles/mepa_drv_intel.dir/flags.make
mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o: ../mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o   -c /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.i"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c > CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.i

mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.s"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/mepa/intel/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c -o CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.s

# Object files for target mepa_drv_intel
mepa_drv_intel_OBJECTS = \
"CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o" \
"CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o" \
"CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o"

# External object files for target mepa_drv_intel
mepa_drv_intel_EXTERNAL_OBJECTS =

mepa/intel/libmepa_drv_intel.a: mepa/intel/CMakeFiles/mepa_drv_intel.dir/phy_driver.c.o
mepa/intel/libmepa_drv_intel.a: mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_chip.c.o
mepa/intel/libmepa_drv_intel.a: mepa/intel/CMakeFiles/mepa_drv_intel.dir/GPY_API_v2.7.1.1/src/api/phy/gpy211_phy.c.o
mepa/intel/libmepa_drv_intel.a: mepa/intel/CMakeFiles/mepa_drv_intel.dir/build.make
mepa/intel/libmepa_drv_intel.a: mepa/intel/CMakeFiles/mepa_drv_intel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libmepa_drv_intel.a"
	cd /home/codrin/mesa/build-mipsel/mepa/intel && $(CMAKE_COMMAND) -P CMakeFiles/mepa_drv_intel.dir/cmake_clean_target.cmake
	cd /home/codrin/mesa/build-mipsel/mepa/intel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mepa_drv_intel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mepa/intel/CMakeFiles/mepa_drv_intel.dir/build: mepa/intel/libmepa_drv_intel.a

.PHONY : mepa/intel/CMakeFiles/mepa_drv_intel.dir/build

mepa/intel/CMakeFiles/mepa_drv_intel.dir/clean:
	cd /home/codrin/mesa/build-mipsel/mepa/intel && $(CMAKE_COMMAND) -P CMakeFiles/mepa_drv_intel.dir/cmake_clean.cmake
.PHONY : mepa/intel/CMakeFiles/mepa_drv_intel.dir/clean

mepa/intel/CMakeFiles/mepa_drv_intel.dir/depend:
	cd /home/codrin/mesa/build-mipsel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codrin/mesa /home/codrin/mesa/mepa/intel /home/codrin/mesa/build-mipsel /home/codrin/mesa/build-mipsel/mepa/intel /home/codrin/mesa/build-mipsel/mepa/intel/CMakeFiles/mepa_drv_intel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mepa/intel/CMakeFiles/mepa_drv_intel.dir/depend

