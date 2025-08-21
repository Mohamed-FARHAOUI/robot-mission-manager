#include "Robot.h"
#include <iostream>

// Parameterized constructor
Robot::Robot(int id, string modele, int capacite) {
    this->id = id;
    this->modele = modele;
    this->capacite = capacite;
    this->nbMissions = 0;
    this->missions = new Mission[capacite];  // Dynamic allocation
}

// Destructor
Robot::~Robot() {
    delete[] missions;  // Free dynamically allocated memory
}

// Add mission method
void Robot::ajouterMission(const Mission& m) {
    if (nbMissions < capacite) {
        missions[nbMissions] = m;
        nbMissions++;
    } else {
        cout << "Capacité maximale atteinte! Impossible d'ajouter la mission." << endl;
    }
}

// Display all missions
void Robot::afficherMissions() const {
    cout << "Missions du robot " << id << " (" << modele << "):" << endl;
    for (int i = 0; i < nbMissions; i++) {
        cout << "  " << missions[i].toString() << endl;
    }
    cout << endl;
}

// toString method
string Robot::toString() const {
    return "Robot " + to_string(id) + " - Modèle: " + modele + 
           " (" + to_string(nbMissions) + "/" + to_string(capacite) + " missions)";
}

// Remove last mission
void Robot::supprimerDerniereMission() {
    if (nbMissions > 0) {
        nbMissions--;
        cout << "Dernière mission supprimée du robot " << id << endl;
    } else {
        cout << "Aucune mission à supprimer pour le robot " << id << endl;
    }
}

// Operator[] for accessing missions by index
Mission& Robot::operator[](int index) {
    if (index >= 0 && index < nbMissions) {
        return missions[index];
    } else {
        throw out_of_range("Index hors limites");
    }
}

// Getters
int Robot::getId() const {
    return id;
}

string Robot::getModele() const {
    return modele;
}

int Robot::getNbMissions() const {
    return nbMissions;
}

int Robot::getCapacite() const {
    return capacite;
}

// Friend function for displaying robot missions
void afficherMissionsRobot(const Robot& r) {
    cout << "=== Affichage via fonction amie ===" << endl;
    cout << "Robot " << r.id << " (" << r.modele << ") - Missions:" << endl;
    for (int i = 0; i < r.nbMissions; i++) {
        cout << "  " << r.missions[i].toString() << endl;
    }
    cout << endl;
}
