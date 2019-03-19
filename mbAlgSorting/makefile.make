CXX=g++
GCC=gcc

FLAG=-std=c++11
GLAG_CHECK=-Wall

MINGW64_GCC=i686-w64-mingw32-gcc
MINGW64_GXX=i686-w64-mingw32-g++


mb_sorting_inserts: mb_sorting_inserts.o
	$(CXX) $(GLAG_CHECK) $(FLAG) mb_sorting_inserts.o -o $@

mb_sorting_inserts.o: mb_sorting_inserts.cpp
	$(CXX) $(GLAG_CHECK) $(FLAG) -c mb_sorting_inserts.cpp

