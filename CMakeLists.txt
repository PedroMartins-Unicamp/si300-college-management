project(MyProject)

file(GLOB_RECURSE SOURCES "src/*.cpp*")

add_executable(MyExec main.cpp ${SOURCES})
