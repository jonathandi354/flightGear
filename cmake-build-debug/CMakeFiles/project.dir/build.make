# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jonathan/CLionProjects/project1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jonathan/CLionProjects/project1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project.dir/flags.make

CMakeFiles/project.dir/main.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/main.cpp.o -c /home/jonathan/CLionProjects/project1/main.cpp

CMakeFiles/project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/main.cpp > CMakeFiles/project.dir/main.cpp.i

CMakeFiles/project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/main.cpp -o CMakeFiles/project.dir/main.cpp.s

CMakeFiles/project.dir/Parser.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Parser.cpp.o: ../Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project.dir/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Parser.cpp.o -c /home/jonathan/CLionProjects/project1/Parser.cpp

CMakeFiles/project.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/Parser.cpp > CMakeFiles/project.dir/Parser.cpp.i

CMakeFiles/project.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/Parser.cpp -o CMakeFiles/project.dir/Parser.cpp.s

CMakeFiles/project.dir/Lexer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project.dir/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Lexer.cpp.o -c /home/jonathan/CLionProjects/project1/Lexer.cpp

CMakeFiles/project.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/Lexer.cpp > CMakeFiles/project.dir/Lexer.cpp.i

CMakeFiles/project.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/Lexer.cpp -o CMakeFiles/project.dir/Lexer.cpp.s

CMakeFiles/project.dir/OpenDataServer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/OpenDataServer.cpp.o: ../OpenDataServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project.dir/OpenDataServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/OpenDataServer.cpp.o -c /home/jonathan/CLionProjects/project1/OpenDataServer.cpp

CMakeFiles/project.dir/OpenDataServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/OpenDataServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/OpenDataServer.cpp > CMakeFiles/project.dir/OpenDataServer.cpp.i

CMakeFiles/project.dir/OpenDataServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/OpenDataServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/OpenDataServer.cpp -o CMakeFiles/project.dir/OpenDataServer.cpp.s

CMakeFiles/project.dir/DataReaderServer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/DataReaderServer.cpp.o: ../DataReaderServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project.dir/DataReaderServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/DataReaderServer.cpp.o -c /home/jonathan/CLionProjects/project1/DataReaderServer.cpp

CMakeFiles/project.dir/DataReaderServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/DataReaderServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/DataReaderServer.cpp > CMakeFiles/project.dir/DataReaderServer.cpp.i

CMakeFiles/project.dir/DataReaderServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/DataReaderServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/DataReaderServer.cpp -o CMakeFiles/project.dir/DataReaderServer.cpp.s

CMakeFiles/project.dir/Connect.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Connect.cpp.o: ../Connect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project.dir/Connect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Connect.cpp.o -c /home/jonathan/CLionProjects/project1/Connect.cpp

CMakeFiles/project.dir/Connect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Connect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/Connect.cpp > CMakeFiles/project.dir/Connect.cpp.i

CMakeFiles/project.dir/Connect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Connect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/Connect.cpp -o CMakeFiles/project.dir/Connect.cpp.s

CMakeFiles/project.dir/Assign.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Assign.cpp.o: ../Assign.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project.dir/Assign.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Assign.cpp.o -c /home/jonathan/CLionProjects/project1/Assign.cpp

CMakeFiles/project.dir/Assign.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Assign.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/Assign.cpp > CMakeFiles/project.dir/Assign.cpp.i

CMakeFiles/project.dir/Assign.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Assign.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/Assign.cpp -o CMakeFiles/project.dir/Assign.cpp.s

CMakeFiles/project.dir/DataControl.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/DataControl.cpp.o: ../DataControl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project.dir/DataControl.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/DataControl.cpp.o -c /home/jonathan/CLionProjects/project1/DataControl.cpp

CMakeFiles/project.dir/DataControl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/DataControl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/DataControl.cpp > CMakeFiles/project.dir/DataControl.cpp.i

CMakeFiles/project.dir/DataControl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/DataControl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/DataControl.cpp -o CMakeFiles/project.dir/DataControl.cpp.s

CMakeFiles/project.dir/CalcExpression.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/CalcExpression.cpp.o: ../CalcExpression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project.dir/CalcExpression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/CalcExpression.cpp.o -c /home/jonathan/CLionProjects/project1/CalcExpression.cpp

CMakeFiles/project.dir/CalcExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/CalcExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/CalcExpression.cpp > CMakeFiles/project.dir/CalcExpression.cpp.i

CMakeFiles/project.dir/CalcExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/CalcExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/CalcExpression.cpp -o CMakeFiles/project.dir/CalcExpression.cpp.s

CMakeFiles/project.dir/BinaryExpression.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/BinaryExpression.cpp.o: ../BinaryExpression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project.dir/BinaryExpression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/BinaryExpression.cpp.o -c /home/jonathan/CLionProjects/project1/BinaryExpression.cpp

CMakeFiles/project.dir/BinaryExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/BinaryExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/BinaryExpression.cpp > CMakeFiles/project.dir/BinaryExpression.cpp.i

CMakeFiles/project.dir/BinaryExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/BinaryExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/BinaryExpression.cpp -o CMakeFiles/project.dir/BinaryExpression.cpp.s

CMakeFiles/project.dir/Expression.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression.cpp.o: ../Expression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project.dir/Expression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression.cpp.o -c /home/jonathan/CLionProjects/project1/Expression.cpp

CMakeFiles/project.dir/Expression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/Expression.cpp > CMakeFiles/project.dir/Expression.cpp.i

CMakeFiles/project.dir/Expression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/Expression.cpp -o CMakeFiles/project.dir/Expression.cpp.s

CMakeFiles/project.dir/KindsOfExpression.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/KindsOfExpression.cpp.o: ../KindsOfExpression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project.dir/KindsOfExpression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/KindsOfExpression.cpp.o -c /home/jonathan/CLionProjects/project1/KindsOfExpression.cpp

CMakeFiles/project.dir/KindsOfExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/KindsOfExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jonathan/CLionProjects/project1/KindsOfExpression.cpp > CMakeFiles/project.dir/KindsOfExpression.cpp.i

CMakeFiles/project.dir/KindsOfExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/KindsOfExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jonathan/CLionProjects/project1/KindsOfExpression.cpp -o CMakeFiles/project.dir/KindsOfExpression.cpp.s

# Object files for target project
project_OBJECTS = \
"CMakeFiles/project.dir/main.cpp.o" \
"CMakeFiles/project.dir/Parser.cpp.o" \
"CMakeFiles/project.dir/Lexer.cpp.o" \
"CMakeFiles/project.dir/OpenDataServer.cpp.o" \
"CMakeFiles/project.dir/DataReaderServer.cpp.o" \
"CMakeFiles/project.dir/Connect.cpp.o" \
"CMakeFiles/project.dir/Assign.cpp.o" \
"CMakeFiles/project.dir/DataControl.cpp.o" \
"CMakeFiles/project.dir/CalcExpression.cpp.o" \
"CMakeFiles/project.dir/BinaryExpression.cpp.o" \
"CMakeFiles/project.dir/Expression.cpp.o" \
"CMakeFiles/project.dir/KindsOfExpression.cpp.o"

# External object files for target project
project_EXTERNAL_OBJECTS =

project: CMakeFiles/project.dir/main.cpp.o
project: CMakeFiles/project.dir/Parser.cpp.o
project: CMakeFiles/project.dir/Lexer.cpp.o
project: CMakeFiles/project.dir/OpenDataServer.cpp.o
project: CMakeFiles/project.dir/DataReaderServer.cpp.o
project: CMakeFiles/project.dir/Connect.cpp.o
project: CMakeFiles/project.dir/Assign.cpp.o
project: CMakeFiles/project.dir/DataControl.cpp.o
project: CMakeFiles/project.dir/CalcExpression.cpp.o
project: CMakeFiles/project.dir/BinaryExpression.cpp.o
project: CMakeFiles/project.dir/Expression.cpp.o
project: CMakeFiles/project.dir/KindsOfExpression.cpp.o
project: CMakeFiles/project.dir/build.make
project: CMakeFiles/project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project.dir/build: project

.PHONY : CMakeFiles/project.dir/build

CMakeFiles/project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project.dir/clean

CMakeFiles/project.dir/depend:
	cd /home/jonathan/CLionProjects/project1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jonathan/CLionProjects/project1 /home/jonathan/CLionProjects/project1 /home/jonathan/CLionProjects/project1/cmake-build-debug /home/jonathan/CLionProjects/project1/cmake-build-debug /home/jonathan/CLionProjects/project1/cmake-build-debug/CMakeFiles/project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project.dir/depend

