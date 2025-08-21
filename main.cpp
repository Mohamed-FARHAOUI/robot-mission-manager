#include <iostream>
#include "Mission.h"
#include "Robot.h"

using namespace std;

int main() {
    cout << "=== SYSTÈME DE GESTION DES MISSIONS ROBOTIQUES ===" << endl << endl;
    
    // a. Instancier deux objets de type Robot
    cout << "1. Création de deux robots:" << endl;
    Robot robot1(101, "Explorer-X1", 5);
    Robot robot2(202, "Worker-Z3", 3);
    
    cout << "Robot 1 créé: " << robot1.toString() << endl;
    cout << "Robot 2 créé: " << robot2.toString() << endl << endl;
    
    // b. Créer plusieurs objets Mission
    cout << "2. Création des missions:" << endl;
    Mission m1(1001, "Exploration de la zone A");
    Mission m2(1002, "Collecte d'échantillons");
    Mission m3(1003, "Surveillance périmétrique");
    Mission m4(2001, "Transport de matériel");
    Mission m5(2002, "Maintenance préventive");
    Mission m6(3001, "Analyse environnementale");
    
    cout << "Missions créées:" << endl;
    cout << "  " << m1.toString() << endl;
    cout << "  " << m2.toString() << endl;
    cout << "  " << m3.toString() << endl;
    cout << "  " << m4.toString() << endl;
    cout << "  " << m5.toString() << endl;
    cout << "  " << m6.toString() << endl << endl;
    
    // c. Ajouter les missions aux robots
    cout << "3. Attribution des missions aux robots:" << endl;
    robot1.ajouterMission(m1);
    robot1.ajouterMission(m2);
    robot1.ajouterMission(m3);
    
    robot2.ajouterMission(m4);
    robot2.ajouterMission(m5);
    robot2.ajouterMission(m6);  // This should work since capacity is 3
    
    cout << "Missions attribuées avec succès!" << endl << endl;
    
    // d. Afficher les missions
    cout << "4. Affichage des missions:" << endl;
    
    // Via afficherMissions()
    cout << "--- Via méthode afficherMissions() ---" << endl;
    robot1.afficherMissions();
    robot2.afficherMissions();
    
    // Via fonction amie afficherMissionsRobot()
    cout << "--- Via fonction amie afficherMissionsRobot() ---" << endl;
    afficherMissionsRobot(robot1);
    afficherMissionsRobot(robot2);
    
    // En accédant directement à une mission par robot[i]
    cout << "--- Accès direct via opérateur[] ---" << endl;
    cout << "Première mission du Robot 1: " << robot1[0].toString() << endl;
    cout << "Première mission du Robot 2: " << robot2[0].toString() << endl << endl;
    
    // e. Supprimer la dernière mission de chaque robot
    cout << "5. Suppression de la dernière mission:" << endl;
    robot1.supprimerDerniereMission();
    robot2.supprimerDerniereMission();
    cout << endl;
    
    // f. Réafficher les missions restantes
    cout << "6. Missions restantes après suppression:" << endl;
    robot1.afficherMissions();
    robot2.afficherMissions();
    
    // g. Afficher les informations générales de chaque robot
    cout << "7. Informations générales des robots:" << endl;
    cout << robot1.toString() << endl;
    cout << robot2.toString() << endl << endl;
    
    // Test de capacité maximale
    cout << "8. Test de dépassement de capacité:" << endl;
    Mission m7(4001, "Mission supplémentaire");
    robot2.ajouterMission(m7);  // Should reach capacity
    
    Mission m8(4002, "Mission en surplus");
    robot2.ajouterMission(m8);  // Should show capacity reached message
    
    cout << endl << "=== FIN DU PROGRAMME ===" << endl;
    
    return 0;
}
