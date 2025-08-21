#ifndef MISSION_H
#define MISSION_H

#include <string>
using namespace std;

class Mission {
private:
    int code;
    string description;

public:
    // Default constructor
    Mission();
    
    // Parameterized constructor
    Mission(int code, string description);
    
    // toString method
    string toString() const;
    
    // Getters
    int getCode() const;
    string getDescription() const;
};

#endif
