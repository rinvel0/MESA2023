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
include meba/CMakeFiles/meba_ocelot.dir/depend.make

# Include the progress variables for this target.
include meba/CMakeFiles/meba_ocelot.dir/progress.make

# Include the compile flags for this target's objects.
include meba/CMakeFiles/meba_ocelot.dir/flags.make

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o: ../meba/src/drivers/phy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o   -c /home/codrin/mesa/meba/src/drivers/phy.c

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/drivers/phy.c > CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.i

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/drivers/phy.c -o CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.s

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o: ../meba/src/drivers/phy_macsec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o   -c /home/codrin/mesa/meba/src/drivers/phy_macsec.c

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/drivers/phy_macsec.c > CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.i

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/drivers/phy_macsec.c -o CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.s

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o: ../meba/src/drivers/phy_ts.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o   -c /home/codrin/mesa/meba/src/drivers/phy_ts.c

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/drivers/phy_ts.c > CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.i

meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/drivers/phy_ts.c -o CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.s

meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o: ../meba/src/drivers/poe_driver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o   -c /home/codrin/mesa/meba/src/drivers/poe_driver.c

meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/drivers/poe_driver.c > CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.i

meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/drivers/poe_driver.c -o CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.s

meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o: ../meba/src/drivers/sfp_driver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o   -c /home/codrin/mesa/meba/src/drivers/sfp_driver.c

meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/drivers/sfp_driver.c > CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.i

meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/drivers/sfp_driver.c -o CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.s

meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o: ../meba/src/meba_aux.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o   -c /home/codrin/mesa/meba/src/meba_aux.c

meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/meba_aux.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/meba_aux.c > CMakeFiles/meba_ocelot.dir/src/meba_aux.c.i

meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/meba_aux.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/meba_aux.c -o CMakeFiles/meba_ocelot.dir/src/meba_aux.c.s

meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o: ../meba/src/meba_generic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o   -c /home/codrin/mesa/meba/src/meba_generic.c

meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/meba_generic.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/meba_generic.c > CMakeFiles/meba_ocelot.dir/src/meba_generic.c.i

meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/meba_generic.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/meba_generic.c -o CMakeFiles/meba_ocelot.dir/src/meba_generic.c.s

meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o: ../meba/src/meba_poe_generic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o   -c /home/codrin/mesa/meba/src/meba_poe_generic.c

meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/meba_poe_generic.c > CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.i

meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/meba_poe_generic.c -o CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.s

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o: ../meba/src/ocelot/meba.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o   -c /home/codrin/mesa/meba/src/ocelot/meba.c

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/ocelot/meba.c > CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.i

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/ocelot/meba.c -o CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.s

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o: ../meba/src/ocelot/meba_poe.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o   -c /home/codrin/mesa/meba/src/ocelot/meba_poe.c

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/ocelot/meba_poe.c > CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.i

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/ocelot/meba_poe.c -o CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.s

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o: ../meba/src/ocelot/synce.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o   -c /home/codrin/mesa/meba/src/ocelot/synce.c

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/ocelot/synce.c > CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.i

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/ocelot/synce.c -o CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.s

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o: meba/CMakeFiles/meba_ocelot.dir/flags.make
meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o: ../meba/src/ocelot/tod.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o   -c /home/codrin/mesa/meba/src/ocelot/tod.c

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.i"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/codrin/mesa/meba/src/ocelot/tod.c > CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.i

meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.s"
	cd /home/codrin/mesa/build-mipsel/meba && /opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/bin/mipsel-linux-gcc --sysroot=/opt/mscc/mscc-brsdk-mipsel-2023.03/mipsel-mips32r2-linux-gnu/xstax/release/x86_64-linux/mipsel-buildroot-linux-gnu/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/codrin/mesa/meba/src/ocelot/tod.c -o CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.s

# Object files for target meba_ocelot
meba_ocelot_OBJECTS = \
"CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o" \
"CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o" \
"CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o" \
"CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o" \
"CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o" \
"CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o" \
"CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o" \
"CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o" \
"CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o" \
"CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o" \
"CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o" \
"CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o"

# External object files for target meba_ocelot
meba_ocelot_EXTERNAL_OBJECTS =

meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_macsec.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/drivers/phy_ts.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/drivers/poe_driver.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/drivers/sfp_driver.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/meba_aux.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/meba_generic.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/meba_poe_generic.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/ocelot/meba_poe.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/ocelot/synce.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/src/ocelot/tod.c.o
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/build.make
meba/libmeba_ocelot.so: meba/CMakeFiles/meba_ocelot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codrin/mesa/build-mipsel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C shared library libmeba_ocelot.so"
	cd /home/codrin/mesa/build-mipsel/meba && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/meba_ocelot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
meba/CMakeFiles/meba_ocelot.dir/build: meba/libmeba_ocelot.so

.PHONY : meba/CMakeFiles/meba_ocelot.dir/build

meba/CMakeFiles/meba_ocelot.dir/clean:
	cd /home/codrin/mesa/build-mipsel/meba && $(CMAKE_COMMAND) -P CMakeFiles/meba_ocelot.dir/cmake_clean.cmake
.PHONY : meba/CMakeFiles/meba_ocelot.dir/clean

meba/CMakeFiles/meba_ocelot.dir/depend:
	cd /home/codrin/mesa/build-mipsel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codrin/mesa /home/codrin/mesa/meba /home/codrin/mesa/build-mipsel /home/codrin/mesa/build-mipsel/meba /home/codrin/mesa/build-mipsel/meba/CMakeFiles/meba_ocelot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : meba/CMakeFiles/meba_ocelot.dir/depend

