# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/5_22.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5_22.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5_22.dir/flags.make

CMakeFiles/5_22.dir/Unit_5/5_22.obj: CMakeFiles/5_22.dir/flags.make
CMakeFiles/5_22.dir/Unit_5/5_22.obj: ../Unit_5/5_22.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5_22.dir/Unit_5/5_22.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\5_22.dir\Unit_5\5_22.obj -c "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\Unit_5\5_22.cpp"

CMakeFiles/5_22.dir/Unit_5/5_22.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5_22.dir/Unit_5/5_22.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\Unit_5\5_22.cpp" > CMakeFiles\5_22.dir\Unit_5\5_22.i

CMakeFiles/5_22.dir/Unit_5/5_22.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5_22.dir/Unit_5/5_22.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\Unit_5\5_22.cpp" -o CMakeFiles\5_22.dir\Unit_5\5_22.s

# Object files for target 5_22
5_22_OBJECTS = \
"CMakeFiles/5_22.dir/Unit_5/5_22.obj"

# External object files for target 5_22
5_22_EXTERNAL_OBJECTS =

5_22.exe: CMakeFiles/5_22.dir/Unit_5/5_22.obj
5_22.exe: CMakeFiles/5_22.dir/build.make
5_22.exe: CMakeFiles/5_22.dir/linklibs.rsp
5_22.exe: CMakeFiles/5_22.dir/objects1.rsp
5_22.exe: CMakeFiles/5_22.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5_22.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\5_22.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5_22.dir/build: 5_22.exe

.PHONY : CMakeFiles/5_22.dir/build

CMakeFiles/5_22.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\5_22.dir\cmake_clean.cmake
.PHONY : CMakeFiles/5_22.dir/clean

CMakeFiles/5_22.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT" "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT" "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug" "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug" "C:\Users\Adam Kahl\CLionProjects\CSC_175_UMFLINT\cmake-build-debug\CMakeFiles\5_22.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/5_22.dir/depend

