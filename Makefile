CXX = g++
CXXFLAGS = -std=c++0x

SRCS = main.cpp file.cpp Critter.cpp Ant.cpp Doodlebug.cpp game.cpp

HEADERS = file.hpp Critter.hpp Ant.hpp Doodlebug.hpp game.cpp

group1: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o group1
