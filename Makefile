# Use the g++ compiler
CXX = g++

# Common compiler flags shared between release and debug builds
COMMONFLAGS = -Wall -Wextra -pedantic -std=c++17

# Flags for building the optimized release version
CXXFLAGS = -O2 $(COMMONFLAGS) -DNDEBUG

# Flags for building the debug version with extra info for debugging
DEBUGFLAGS = -g $(COMMONFLAGS) -Og -DDEBUG -G3 -O0

# Linker flags, like linking the math library (-lm) 
# (can be adjusted if necessary)
# NOTE: Not required for now 

# LDFLAGS = -lm

# Find all .cpp files in the current directory and subdirectories
SOURCES = $(shell find . -name '*.cpp')

# Define the output file names without any extension
EXECS = $(SOURCES:.cpp=)

# Diagnostic output to ensure files are found
$(info SOURCES = $(SOURCES))
$(info EXECS = $(EXECS))

# By default, build everything in release mode
all: $(EXECS)

# Rule to compile each .cpp file into an executable without an extension
%: %.cpp
	@echo "Building $@ from $<"
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

# Build everything in debug mode when you run `make debug`
debug: $(patsubst %.cpp,%.debug,$(SOURCES))

# Rule to compile each .cpp file into a debug executable (named with .debug extension)
%.debug: %.cpp
	@echo "Building $@ from $<"
	$(CXX) $(DEBUGFLAGS) $< -o $@ $(LDFLAGS)

# Clean up all the executables (both release and debug)
clean:
	@echo "Cleaning up..."
	@rm -f $(EXECS) $(patsubst %.cpp,%.debug,$(SOURCES))

# Tell make these are not actual files
.PHONY: all debug clean
