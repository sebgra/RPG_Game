# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sebastien/Bureau/Jeu_commente/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebastien/Bureau/Jeu_commente/build

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/main.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/main.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/main.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/main.cpp

CMakeFiles/Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/main.cpp > CMakeFiles/Game.dir/main.cpp.i

CMakeFiles/Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/main.cpp -o CMakeFiles/Game.dir/main.cpp.s

CMakeFiles/Game.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/main.cpp.o.requires

CMakeFiles/Game.dir/main.cpp.o.provides: CMakeFiles/Game.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/main.cpp.o.provides

CMakeFiles/Game.dir/main.cpp.o.provides.build: CMakeFiles/Game.dir/main.cpp.o


CMakeFiles/Game.dir/Rand.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Rand.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Rand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/Rand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Rand.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Rand.cpp

CMakeFiles/Game.dir/Rand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Rand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Rand.cpp > CMakeFiles/Game.dir/Rand.cpp.i

CMakeFiles/Game.dir/Rand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Rand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Rand.cpp -o CMakeFiles/Game.dir/Rand.cpp.s

CMakeFiles/Game.dir/Rand.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Rand.cpp.o.requires

CMakeFiles/Game.dir/Rand.cpp.o.provides: CMakeFiles/Game.dir/Rand.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Rand.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Rand.cpp.o.provides

CMakeFiles/Game.dir/Rand.cpp.o.provides.build: CMakeFiles/Game.dir/Rand.cpp.o


CMakeFiles/Game.dir/Personnage.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Personnage.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Personnage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/Personnage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Personnage.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Personnage.cpp

CMakeFiles/Game.dir/Personnage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Personnage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Personnage.cpp > CMakeFiles/Game.dir/Personnage.cpp.i

CMakeFiles/Game.dir/Personnage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Personnage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Personnage.cpp -o CMakeFiles/Game.dir/Personnage.cpp.s

CMakeFiles/Game.dir/Personnage.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Personnage.cpp.o.requires

CMakeFiles/Game.dir/Personnage.cpp.o.provides: CMakeFiles/Game.dir/Personnage.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Personnage.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Personnage.cpp.o.provides

CMakeFiles/Game.dir/Personnage.cpp.o.provides.build: CMakeFiles/Game.dir/Personnage.cpp.o


CMakeFiles/Game.dir/Guerrier.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Guerrier.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Guerrier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/Guerrier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Guerrier.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Guerrier.cpp

CMakeFiles/Game.dir/Guerrier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Guerrier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Guerrier.cpp > CMakeFiles/Game.dir/Guerrier.cpp.i

CMakeFiles/Game.dir/Guerrier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Guerrier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Guerrier.cpp -o CMakeFiles/Game.dir/Guerrier.cpp.s

CMakeFiles/Game.dir/Guerrier.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Guerrier.cpp.o.requires

CMakeFiles/Game.dir/Guerrier.cpp.o.provides: CMakeFiles/Game.dir/Guerrier.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Guerrier.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Guerrier.cpp.o.provides

CMakeFiles/Game.dir/Guerrier.cpp.o.provides.build: CMakeFiles/Game.dir/Guerrier.cpp.o


CMakeFiles/Game.dir/Magicien.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Magicien.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Magicien.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/Magicien.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Magicien.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Magicien.cpp

CMakeFiles/Game.dir/Magicien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Magicien.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Magicien.cpp > CMakeFiles/Game.dir/Magicien.cpp.i

CMakeFiles/Game.dir/Magicien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Magicien.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Magicien.cpp -o CMakeFiles/Game.dir/Magicien.cpp.s

CMakeFiles/Game.dir/Magicien.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Magicien.cpp.o.requires

CMakeFiles/Game.dir/Magicien.cpp.o.provides: CMakeFiles/Game.dir/Magicien.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Magicien.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Magicien.cpp.o.provides

CMakeFiles/Game.dir/Magicien.cpp.o.provides.build: CMakeFiles/Game.dir/Magicien.cpp.o


CMakeFiles/Game.dir/Voleur.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Voleur.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Voleur.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Game.dir/Voleur.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Voleur.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Voleur.cpp

CMakeFiles/Game.dir/Voleur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Voleur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Voleur.cpp > CMakeFiles/Game.dir/Voleur.cpp.i

CMakeFiles/Game.dir/Voleur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Voleur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Voleur.cpp -o CMakeFiles/Game.dir/Voleur.cpp.s

CMakeFiles/Game.dir/Voleur.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Voleur.cpp.o.requires

CMakeFiles/Game.dir/Voleur.cpp.o.provides: CMakeFiles/Game.dir/Voleur.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Voleur.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Voleur.cpp.o.provides

CMakeFiles/Game.dir/Voleur.cpp.o.provides.build: CMakeFiles/Game.dir/Voleur.cpp.o


CMakeFiles/Game.dir/Squelette.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Squelette.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Squelette.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Game.dir/Squelette.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Squelette.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Squelette.cpp

CMakeFiles/Game.dir/Squelette.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Squelette.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Squelette.cpp > CMakeFiles/Game.dir/Squelette.cpp.i

CMakeFiles/Game.dir/Squelette.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Squelette.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Squelette.cpp -o CMakeFiles/Game.dir/Squelette.cpp.s

CMakeFiles/Game.dir/Squelette.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Squelette.cpp.o.requires

CMakeFiles/Game.dir/Squelette.cpp.o.provides: CMakeFiles/Game.dir/Squelette.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Squelette.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Squelette.cpp.o.provides

CMakeFiles/Game.dir/Squelette.cpp.o.provides.build: CMakeFiles/Game.dir/Squelette.cpp.o


CMakeFiles/Game.dir/Araignee.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Araignee.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Araignee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Game.dir/Araignee.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Araignee.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Araignee.cpp

CMakeFiles/Game.dir/Araignee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Araignee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Araignee.cpp > CMakeFiles/Game.dir/Araignee.cpp.i

CMakeFiles/Game.dir/Araignee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Araignee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Araignee.cpp -o CMakeFiles/Game.dir/Araignee.cpp.s

CMakeFiles/Game.dir/Araignee.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Araignee.cpp.o.requires

CMakeFiles/Game.dir/Araignee.cpp.o.provides: CMakeFiles/Game.dir/Araignee.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Araignee.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Araignee.cpp.o.provides

CMakeFiles/Game.dir/Araignee.cpp.o.provides.build: CMakeFiles/Game.dir/Araignee.cpp.o


CMakeFiles/Game.dir/Gobelin.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Gobelin.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Gobelin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Game.dir/Gobelin.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Gobelin.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Gobelin.cpp

CMakeFiles/Game.dir/Gobelin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Gobelin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Gobelin.cpp > CMakeFiles/Game.dir/Gobelin.cpp.i

CMakeFiles/Game.dir/Gobelin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Gobelin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Gobelin.cpp -o CMakeFiles/Game.dir/Gobelin.cpp.s

CMakeFiles/Game.dir/Gobelin.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Gobelin.cpp.o.requires

CMakeFiles/Game.dir/Gobelin.cpp.o.provides: CMakeFiles/Game.dir/Gobelin.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Gobelin.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Gobelin.cpp.o.provides

CMakeFiles/Game.dir/Gobelin.cpp.o.provides.build: CMakeFiles/Game.dir/Gobelin.cpp.o


CMakeFiles/Game.dir/Boss.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Boss.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Boss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Game.dir/Boss.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Boss.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Boss.cpp

CMakeFiles/Game.dir/Boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Boss.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Boss.cpp > CMakeFiles/Game.dir/Boss.cpp.i

CMakeFiles/Game.dir/Boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Boss.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Boss.cpp -o CMakeFiles/Game.dir/Boss.cpp.s

CMakeFiles/Game.dir/Boss.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Boss.cpp.o.requires

CMakeFiles/Game.dir/Boss.cpp.o.provides: CMakeFiles/Game.dir/Boss.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Boss.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Boss.cpp.o.provides

CMakeFiles/Game.dir/Boss.cpp.o.provides.build: CMakeFiles/Game.dir/Boss.cpp.o


CMakeFiles/Game.dir/Case.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Case.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Case.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Game.dir/Case.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Case.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Case.cpp

CMakeFiles/Game.dir/Case.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Case.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Case.cpp > CMakeFiles/Game.dir/Case.cpp.i

CMakeFiles/Game.dir/Case.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Case.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Case.cpp -o CMakeFiles/Game.dir/Case.cpp.s

CMakeFiles/Game.dir/Case.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Case.cpp.o.requires

CMakeFiles/Game.dir/Case.cpp.o.provides: CMakeFiles/Game.dir/Case.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Case.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Case.cpp.o.provides

CMakeFiles/Game.dir/Case.cpp.o.provides.build: CMakeFiles/Game.dir/Case.cpp.o


CMakeFiles/Game.dir/Drop.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Drop.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Drop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Game.dir/Drop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Drop.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Drop.cpp

CMakeFiles/Game.dir/Drop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Drop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Drop.cpp > CMakeFiles/Game.dir/Drop.cpp.i

CMakeFiles/Game.dir/Drop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Drop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Drop.cpp -o CMakeFiles/Game.dir/Drop.cpp.s

CMakeFiles/Game.dir/Drop.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Drop.cpp.o.requires

CMakeFiles/Game.dir/Drop.cpp.o.provides: CMakeFiles/Game.dir/Drop.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Drop.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Drop.cpp.o.provides

CMakeFiles/Game.dir/Drop.cpp.o.provides.build: CMakeFiles/Game.dir/Drop.cpp.o


CMakeFiles/Game.dir/Combat.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Combat.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Combat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Game.dir/Combat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Combat.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Combat.cpp

CMakeFiles/Game.dir/Combat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Combat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Combat.cpp > CMakeFiles/Game.dir/Combat.cpp.i

CMakeFiles/Game.dir/Combat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Combat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Combat.cpp -o CMakeFiles/Game.dir/Combat.cpp.s

CMakeFiles/Game.dir/Combat.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Combat.cpp.o.requires

CMakeFiles/Game.dir/Combat.cpp.o.provides: CMakeFiles/Game.dir/Combat.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Combat.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Combat.cpp.o.provides

CMakeFiles/Game.dir/Combat.cpp.o.provides.build: CMakeFiles/Game.dir/Combat.cpp.o


CMakeFiles/Game.dir/Combat_Guerrier.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Combat_Guerrier.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Combat_Guerrier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Game.dir/Combat_Guerrier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Combat_Guerrier.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Combat_Guerrier.cpp

CMakeFiles/Game.dir/Combat_Guerrier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Combat_Guerrier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Combat_Guerrier.cpp > CMakeFiles/Game.dir/Combat_Guerrier.cpp.i

CMakeFiles/Game.dir/Combat_Guerrier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Combat_Guerrier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Combat_Guerrier.cpp -o CMakeFiles/Game.dir/Combat_Guerrier.cpp.s

CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.requires

CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.provides: CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.provides

CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.provides.build: CMakeFiles/Game.dir/Combat_Guerrier.cpp.o


CMakeFiles/Game.dir/Combat_Magicien.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Combat_Magicien.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Combat_Magicien.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Game.dir/Combat_Magicien.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Combat_Magicien.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Combat_Magicien.cpp

CMakeFiles/Game.dir/Combat_Magicien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Combat_Magicien.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Combat_Magicien.cpp > CMakeFiles/Game.dir/Combat_Magicien.cpp.i

CMakeFiles/Game.dir/Combat_Magicien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Combat_Magicien.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Combat_Magicien.cpp -o CMakeFiles/Game.dir/Combat_Magicien.cpp.s

CMakeFiles/Game.dir/Combat_Magicien.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Combat_Magicien.cpp.o.requires

CMakeFiles/Game.dir/Combat_Magicien.cpp.o.provides: CMakeFiles/Game.dir/Combat_Magicien.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Combat_Magicien.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Combat_Magicien.cpp.o.provides

CMakeFiles/Game.dir/Combat_Magicien.cpp.o.provides.build: CMakeFiles/Game.dir/Combat_Magicien.cpp.o


CMakeFiles/Game.dir/Combat_Voleur.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Combat_Voleur.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Combat_Voleur.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Game.dir/Combat_Voleur.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Combat_Voleur.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Combat_Voleur.cpp

CMakeFiles/Game.dir/Combat_Voleur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Combat_Voleur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Combat_Voleur.cpp > CMakeFiles/Game.dir/Combat_Voleur.cpp.i

CMakeFiles/Game.dir/Combat_Voleur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Combat_Voleur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Combat_Voleur.cpp -o CMakeFiles/Game.dir/Combat_Voleur.cpp.s

CMakeFiles/Game.dir/Combat_Voleur.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Combat_Voleur.cpp.o.requires

CMakeFiles/Game.dir/Combat_Voleur.cpp.o.provides: CMakeFiles/Game.dir/Combat_Voleur.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Combat_Voleur.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Combat_Voleur.cpp.o.provides

CMakeFiles/Game.dir/Combat_Voleur.cpp.o.provides.build: CMakeFiles/Game.dir/Combat_Voleur.cpp.o


CMakeFiles/Game.dir/Deplacement.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Deplacement.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Deplacement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/Game.dir/Deplacement.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Deplacement.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Deplacement.cpp

CMakeFiles/Game.dir/Deplacement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Deplacement.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Deplacement.cpp > CMakeFiles/Game.dir/Deplacement.cpp.i

CMakeFiles/Game.dir/Deplacement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Deplacement.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Deplacement.cpp -o CMakeFiles/Game.dir/Deplacement.cpp.s

CMakeFiles/Game.dir/Deplacement.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Deplacement.cpp.o.requires

CMakeFiles/Game.dir/Deplacement.cpp.o.provides: CMakeFiles/Game.dir/Deplacement.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Deplacement.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Deplacement.cpp.o.provides

CMakeFiles/Game.dir/Deplacement.cpp.o.provides.build: CMakeFiles/Game.dir/Deplacement.cpp.o


CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Scenario_Guerrier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Scenario_Guerrier.cpp

CMakeFiles/Game.dir/Scenario_Guerrier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Scenario_Guerrier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Scenario_Guerrier.cpp > CMakeFiles/Game.dir/Scenario_Guerrier.cpp.i

CMakeFiles/Game.dir/Scenario_Guerrier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Scenario_Guerrier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Scenario_Guerrier.cpp -o CMakeFiles/Game.dir/Scenario_Guerrier.cpp.s

CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.requires

CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.provides: CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.provides

CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.provides.build: CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o


CMakeFiles/Game.dir/Scenario_Magicien.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Scenario_Magicien.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Scenario_Magicien.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/Game.dir/Scenario_Magicien.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Scenario_Magicien.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Scenario_Magicien.cpp

CMakeFiles/Game.dir/Scenario_Magicien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Scenario_Magicien.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Scenario_Magicien.cpp > CMakeFiles/Game.dir/Scenario_Magicien.cpp.i

CMakeFiles/Game.dir/Scenario_Magicien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Scenario_Magicien.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Scenario_Magicien.cpp -o CMakeFiles/Game.dir/Scenario_Magicien.cpp.s

CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.requires

CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.provides: CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.provides

CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.provides.build: CMakeFiles/Game.dir/Scenario_Magicien.cpp.o


CMakeFiles/Game.dir/Scenario_Voleur.cpp.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Scenario_Voleur.cpp.o: /home/sebastien/Bureau/Jeu_commente/src/Scenario_Voleur.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/Game.dir/Scenario_Voleur.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game.dir/Scenario_Voleur.cpp.o -c /home/sebastien/Bureau/Jeu_commente/src/Scenario_Voleur.cpp

CMakeFiles/Game.dir/Scenario_Voleur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/Scenario_Voleur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastien/Bureau/Jeu_commente/src/Scenario_Voleur.cpp > CMakeFiles/Game.dir/Scenario_Voleur.cpp.i

CMakeFiles/Game.dir/Scenario_Voleur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Scenario_Voleur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastien/Bureau/Jeu_commente/src/Scenario_Voleur.cpp -o CMakeFiles/Game.dir/Scenario_Voleur.cpp.s

CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.requires:

.PHONY : CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.requires

CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.provides: CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.requires
	$(MAKE) -f CMakeFiles/Game.dir/build.make CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.provides.build
.PHONY : CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.provides

CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.provides.build: CMakeFiles/Game.dir/Scenario_Voleur.cpp.o


# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/main.cpp.o" \
"CMakeFiles/Game.dir/Rand.cpp.o" \
"CMakeFiles/Game.dir/Personnage.cpp.o" \
"CMakeFiles/Game.dir/Guerrier.cpp.o" \
"CMakeFiles/Game.dir/Magicien.cpp.o" \
"CMakeFiles/Game.dir/Voleur.cpp.o" \
"CMakeFiles/Game.dir/Squelette.cpp.o" \
"CMakeFiles/Game.dir/Araignee.cpp.o" \
"CMakeFiles/Game.dir/Gobelin.cpp.o" \
"CMakeFiles/Game.dir/Boss.cpp.o" \
"CMakeFiles/Game.dir/Case.cpp.o" \
"CMakeFiles/Game.dir/Drop.cpp.o" \
"CMakeFiles/Game.dir/Combat.cpp.o" \
"CMakeFiles/Game.dir/Combat_Guerrier.cpp.o" \
"CMakeFiles/Game.dir/Combat_Magicien.cpp.o" \
"CMakeFiles/Game.dir/Combat_Voleur.cpp.o" \
"CMakeFiles/Game.dir/Deplacement.cpp.o" \
"CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o" \
"CMakeFiles/Game.dir/Scenario_Magicien.cpp.o" \
"CMakeFiles/Game.dir/Scenario_Voleur.cpp.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/main.cpp.o
Game: CMakeFiles/Game.dir/Rand.cpp.o
Game: CMakeFiles/Game.dir/Personnage.cpp.o
Game: CMakeFiles/Game.dir/Guerrier.cpp.o
Game: CMakeFiles/Game.dir/Magicien.cpp.o
Game: CMakeFiles/Game.dir/Voleur.cpp.o
Game: CMakeFiles/Game.dir/Squelette.cpp.o
Game: CMakeFiles/Game.dir/Araignee.cpp.o
Game: CMakeFiles/Game.dir/Gobelin.cpp.o
Game: CMakeFiles/Game.dir/Boss.cpp.o
Game: CMakeFiles/Game.dir/Case.cpp.o
Game: CMakeFiles/Game.dir/Drop.cpp.o
Game: CMakeFiles/Game.dir/Combat.cpp.o
Game: CMakeFiles/Game.dir/Combat_Guerrier.cpp.o
Game: CMakeFiles/Game.dir/Combat_Magicien.cpp.o
Game: CMakeFiles/Game.dir/Combat_Voleur.cpp.o
Game: CMakeFiles/Game.dir/Deplacement.cpp.o
Game: CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o
Game: CMakeFiles/Game.dir/Scenario_Magicien.cpp.o
Game: CMakeFiles/Game.dir/Scenario_Voleur.cpp.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebastien/Bureau/Jeu_commente/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game

.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/main.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Rand.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Personnage.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Guerrier.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Magicien.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Voleur.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Squelette.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Araignee.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Gobelin.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Boss.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Case.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Drop.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Combat.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Combat_Guerrier.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Combat_Magicien.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Combat_Voleur.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Deplacement.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Scenario_Guerrier.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Scenario_Magicien.cpp.o.requires
CMakeFiles/Game.dir/requires: CMakeFiles/Game.dir/Scenario_Voleur.cpp.o.requires

.PHONY : CMakeFiles/Game.dir/requires

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /home/sebastien/Bureau/Jeu_commente/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebastien/Bureau/Jeu_commente/src /home/sebastien/Bureau/Jeu_commente/src /home/sebastien/Bureau/Jeu_commente/build /home/sebastien/Bureau/Jeu_commente/build /home/sebastien/Bureau/Jeu_commente/build/CMakeFiles/Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Game.dir/depend

