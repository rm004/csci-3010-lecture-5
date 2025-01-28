# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: test

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and run_library.cpp will be monitored for changes to know if it needs to be re-made
test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test # name of output should be consistent

# runs for "make clean"
clean:
	rm test  #include all targets here