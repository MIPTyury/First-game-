# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fedin\CLionProjects\Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fedin\CLionProjects\Game\cmake-build-mingw

# Include any dependencies generated for this target.
include CMakeFiles/Game1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game1.dir/flags.make

CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj: CMakeFiles/Game1.dir/flags.make
CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj: CMakeFiles/Game1.dir/includes_CXX.rsp
CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj: ../Source\ Files/Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fedin\CLionProjects\Game\cmake-build-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game1.dir\Source_Files\Test.cpp.obj -c "C:\Users\fedin\CLionProjects\Game\Source Files\Test.cpp"

CMakeFiles/Game1.dir/Source_Files/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game1.dir/Source_Files/Test.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fedin\CLionProjects\Game\Source Files\Test.cpp" > CMakeFiles\Game1.dir\Source_Files\Test.cpp.i

CMakeFiles/Game1.dir/Source_Files/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game1.dir/Source_Files/Test.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\fedin\CLionProjects\Game\Source Files\Test.cpp" -o CMakeFiles\Game1.dir\Source_Files\Test.cpp.s

# Object files for target Game1
Game1_OBJECTS = \
"CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj"

# External object files for target Game1
Game1_EXTERNAL_OBJECTS =

Game1.exe: CMakeFiles/Game1.dir/Source_Files/Test.cpp.obj
Game1.exe: CMakeFiles/Game1.dir/build.make
Game1.exe: C:/SFML/lib/libsfml-system-s-d.a
Game1.exe: C:/SFML/lib/libsfml-window-s-d.a
Game1.exe: C:/SFML/lib/libsfml-graphics-s-d.a
Game1.exe: C:/SFML/lib/libsfml-audio-s-d.a
Game1.exe: C:/SFML/lib/libsfml-network-s-d.a
Game1.exe: C:/SFML/lib/libsfml-window-s-d.a
Game1.exe: C:/SFML/lib/libfreetype.a
Game1.exe: C:/SFML/lib/libopenal32.a
Game1.exe: C:/SFML/lib/libvorbisfile.a
Game1.exe: C:/SFML/lib/libvorbisenc.a
Game1.exe: C:/SFML/lib/libvorbis.a
Game1.exe: C:/SFML/lib/libogg.a
Game1.exe: C:/SFML/lib/libFLAC.a
Game1.exe: C:/SFML/lib/libsfml-system-s-d.a
Game1.exe: CMakeFiles/Game1.dir/linklibs.rsp
Game1.exe: CMakeFiles/Game1.dir/objects1.rsp
Game1.exe: CMakeFiles/Game1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fedin\CLionProjects\Game\cmake-build-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Game1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Game1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game1.dir/build: Game1.exe

.PHONY : CMakeFiles/Game1.dir/build

CMakeFiles/Game1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Game1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Game1.dir/clean

CMakeFiles/Game1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fedin\CLionProjects\Game C:\Users\fedin\CLionProjects\Game C:\Users\fedin\CLionProjects\Game\cmake-build-mingw C:\Users\fedin\CLionProjects\Game\cmake-build-mingw C:\Users\fedin\CLionProjects\Game\cmake-build-mingw\CMakeFiles\Game1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game1.dir/depend
