#ifndef DEF_CASE
#define DEF_CASE    // Definition si non defini

#include <iostream>
#include <cstdlib> // Inclusion des bibliotheques et classes necessaires
#include <string>

class Case
{
    protected: // permet l'acces aux attributs pour les methodes 

    int m_numero;        // numero de la case pour faciliter le reperge dans la map
    int m_X_localisation; // position du personnage en X
    int m_Y_localisation; // position du personnage en X
    bool combat_ou_non; // permet de definir la presence d'un monstre sur la position (X,Y) ou non --> fixe a l'avance
    bool obstacle; //permet de definir la presence d'un obstacle sur la position (X,Y) ou non --> fixe a l'avance
    std::string m_sprite; // contient le chemin vers l'image avec le heros sur la bonne case


 
    public:

    Case(int numero, int X_loc, int Y_loc, bool combat, bool barriere,std::string image); // Constructeur --> On precise l'ensemble des attributs
    
    int get_numero(); // permet de recuperer le numero de la case
    int get_X_localisation(); // permet de recuperer la position de la case
    int get_Y_localisation(); // permet de recuperer la position de la case
    bool get_combat_ou_non(); // permet de savoir si il y a combat ou non
    bool get_obstacle(); // permet de savoir si il y a un obstacle ou non
    void set_combat_ou_non(); // Non utilise pour le moment, permettra de retirer le monstre une fois battu
    std::string get_sprite(); // permet de renvoyer le sprite correspondant au positionnement du heros sur la carte --> partie graphique


    


    ~Case(); // destructeur
};
#endif