CXX=g++
GCC=gcc

FLAG=-std=c++11
GLAG_CHECK=-Wall

MINGW64_GCC=i686-w64-mingw32-gcc
MINGW64_GXX=i686-w64-mingw32-g++


mb_sort_selection: mb_sort_selection.o
	$(CXX) $(GLAG_CHECK) $(FLAG) mb_sort_selection.o -o $@

mb_sort_selection.o: mb_sort_selection.cpp
	$(CXX) $(GLAG_CHECK) $(FLAG) -c mb_sort_selection.cpp

