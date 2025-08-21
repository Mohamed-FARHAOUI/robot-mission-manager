# Makefile for Robot Mission Management System

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = robot_missions
SOURCES = main.cpp Mission.cpp Robot.cpp
HEADERS = Mission.h Robot.h
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Compile source files to object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Install dependencies (if any)
install:
	@echo "No external dependencies to install"

# Help target
help:
	@echo "Available targets:"
	@echo "  all     - Build the project (default)"
	@echo "  clean   - Remove object files and executable"
	@echo "  run     - Build and run the program"
	@echo "  help    - Show this help message"

.PHONY: all clean run install help
