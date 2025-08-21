#include "Mission.h"

// Default constructor
Mission::Mission() {
    code = 0;
    description = "Non définie";
}

// Parameterized constructor
Mission::Mission(int code, string description) {
    this->code = code;
    this->description = description;
}

// toString method - returns formatted string as specified
string Mission::toString() const {
    return "Mission [" + to_string(code) + "] : " + description;
}

// Getters
int Mission::getCode() const {
    return code;
}

string Mission::getDescription() const {
    return description;
}
