# About

This is the workspace for fn 22707 - Asen

# Creating a new project
 You will need to have the following:
  - git - for source control
  - cmake - to building the program
  - c++ compiler
      - Linux: g++
      - Windows: VisualStudio (C++ Profile)

# A project in Git
 1. Initialize a git repository and move the code there
 2. Take a look at `git status` and `git log`
 3. Add your source file(s) to the repository with `git add` and take a look at `git status`
 4. Make sure you have not added binary/executable files
 5. Commit the files with some meaningful message with `git commit -m "message"`
 6. Again, take a look at `git status` and `git log`
 3. Go to github and create a repository there.
 4. Follow the help to initialize the github repository with your existing repository.
 5. View the code in github and modify the source code from the web editor.
 6. Pull it locally with `git pull` and view the `git log`

# A project with CMAKE (On Linux)
 1. Find a simple cmake tutorial and take a look at it.
 2. Create the CMakeLists.txt file and add the executable
    ```cmake
    cmake_minimum_required (VERSION 2.6)
    project (myproject)
    add_executable(pargs pargs.cpp)
    ```
 3. Create a build folder and go there, then run cmake
    ```bash
    mkdir build
    cd build
    cmake ..
    ```
    Note: For this to work you will need to have a compiler and build system installed. On Linux that could be "g++ and make", whereas on Windows "Visual Studio with C++" provides both capabilities.
 4. List the files with `ls` to see the generated build files. In most case on Linux you'd see a Makefile for *make* and on Windows a .sln for *Visual Studio*
 5. Now build your project using `cmake --build .` while still in the build directory.
 6. Test the built binary - `./pargs hello "new world"`

# Setting git to ignoring temporary files
 1. Why did we need the build folder? - see with `git status`
 2. Create a .gitignore file and add the build folder, then take a look at `git status`
 3. Now add the .gitignore and `CMakeLists` and commit them.
 4. Take a look at `git status` and `git log` again
 5. Now push and see what happened in github

# Using the git repository on another machine (Windows)
 1. Make sure you have git, cmake, Visual Studio
 2. Get a clone link from the github page of your repository and clone it
 3. Make a build folder go there and build the project with cmake
    ```cmd
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```
 4. Now run the binary from the commandline
 5. Then go see the generated solution in Visual studio

# Automating the build process
 1. On Linux create a `bld.sh` script to do the build for you.
 2. Add a "clean" option. Test it commit it and push it
 3. On Windows create a `bld.cmd` script with a clean option.
 4. Test it, commit it and push it.