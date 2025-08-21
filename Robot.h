#ifndef ROBOT_H
#define ROBOT_H

#include "Mission.h"
#include <string>
using namespace std;

class Robot {
private:
    int id;
    string modele;
    Mission* missions;  // Dynamic array of missions
    int nbMissions;     // Current number of missions
    int capacite;       // Maximum capacity

public:
    // Parameterized constructor
    Robot(int id, string modele, int capacite);
    
    // Destructor
    ~Robot();
    
    // Add mission method
    void ajouterMission(const Mission& m);
    
    // Display all missions
    void afficherMissions() const;
    
    // toString method
    string toString() const;
    
    // Remove last mission
    void supprimerDerniereMission();
    
    // Operator[] for accessing missions by index
    Mission& operator[](int index);
    
    // Getters
    int getId() const;
    string getModele() const;
    int getNbMissions() const;
    int getCapacite() const;
};

// Friend function prototype for afficherMissionsRobot
void afficherMissionsRobot(const Robot& r);

#endif
