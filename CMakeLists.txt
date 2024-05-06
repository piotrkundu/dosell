cmake_minimum_required(VERSION 3.5)
project(DosellSim)

set(CMAKE_CXX_STANDARD 11)

# Add executables
add_executable(DosellSim main.cpp CommandHandler.cpp)

# Include commands folder
add_subdirectory(commands)
target_link_libraries(DosellSim PRIVATE commands)


# Enable testing
enable_testing()

# Add unit test executable
add_executable(DosellSimTests tests/main.cpp)

# Include commands folder for tests
add_subdirectory(tests)

# Link test executable with Catch2
target_link_libraries(DosellSimTests PRIVATE Catch2::Catch2)

# Discover and add tests
include(CTest)
include(Catch)
catch_discover_tests(DosellSimTests)