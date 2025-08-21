# Robot Mission Management System

This project implements a dynamic mission management system for robots using C++ classes and dynamic memory allocation.

## Project Overview

The system consists of two main classes:
- **Mission**: Represents a task that can be assigned to a robot
- **Robot**: Represents a robot capable of managing multiple missions

## Features

- Dynamic mission allocation using arrays
- Mission capacity management
- Mission display and deletion functionality
- Memory management with proper destructors
- Robot information display

## Class Specifications

### Mission Class
- **Private Attributes**:
  - `int code`: Unique mission identifier
  - `string description`: Mission objective or description

- **Public Methods**:
  - Default constructor (initializes with default values)
  - Parameterized constructor
  - `toString()`: Returns formatted mission information

### Robot Class
- **Private Attributes**:
  - `int id`: Robot identifier
  - `string modele`: Robot model designation
  - `Mission* missions`: Dynamic array of missions
  - `int nbMissions`: Current number of assigned missions
  - `int capacite`: Maximum mission capacity

- **Public Methods**:
  - Parameterized constructor
  - `ajouterMission(const Mission&)`: Adds a mission if capacity allows
  - `afficherMissions()`: Displays all assigned missions
  - `toString()`: Returns robot information
  - `supprimerDerniereMission()`: Removes the last mission
  - `operator[]`: Access mission by index
  - Destructor for memory cleanup

## File Structure

```
├── Mission.h          # Mission class declaration
├── Mission.cpp        # Mission class implementation
├── Robot.h            # Robot class declaration
├── Robot.cpp          # Robot class implementation
├── main.cpp           # Main program with test scenarios
└── README.md          # This documentation
```

## Compilation and Execution

To compile the project:
```bash
g++ -o robot_missions main.cpp Mission.cpp Robot.cpp
```

To run the program:
```bash
./robot_missions
```

## Exercise Requirements

### Exercise 1: Mission Class
Create a Mission class with private attributes and public methods including constructors and toString() method.

### Exercise 2: Robot Class
Implement a Robot class with dynamic mission management capabilities including:
- Dynamic memory allocation for missions array
- Mission addition with capacity checking
- Mission display functionality
- Proper memory cleanup

### Exercise 3: Main Function Implementation
The main function demonstrates:
1. Creating two Robot objects with different identifiers, models, and capacities
2. Creating multiple Mission objects with various codes and descriptions
3. Adding missions to robots using ajouterMission()
4. Displaying missions using multiple methods
5. Removing the last mission from each robot
6. Re-displaying remaining missions
7. Showing general robot information

## Memory Management

The project properly handles dynamic memory allocation:
- Missions array is allocated dynamically in Robot constructor
- Memory is properly freed in the Robot destructor
- Capacity checking prevents buffer overflow

## Example Output

The program will display:
- Individual mission information
- All missions assigned to each robot
- Robot general information including model and current mission count
- Updated mission lists after deletions
