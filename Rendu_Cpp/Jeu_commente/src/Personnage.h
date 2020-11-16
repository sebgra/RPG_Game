#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE // definition si non defini

#include <iostream>
#include <cstdlib>      
#include <string>       // inclusion des classes, fonctions et bibliotheques necessaires
#include "Case.h"

class Personnage
{
    protected: 

    int Id;   // identifiant du Personnage     
    int m_vie; // vie du Personnage
    int m_degats; // degats de base du Personnage
    int m_X_pos; // position initiale du Personnage en X
    int m_Y_pos;// position initiale du Personnage en Y
    int m_niveau; // niveau initial du Personnage
    int m_experience; // experience initiale du Personnage
    int m_puissance; // puissance initiale du Personnage
    bool m_est_vivant; // indicateur permettant de voir si le Personnage est en vie ou non --> non utile pour le moment

    std::string m_sprite; // sprite du personnage --> sa position sur la map
    const Case *m_tile; // pointeur permettant d'associer Personnage a un objet de type Case
                        // va etre utilise pour gerer le deplacement du Personnage au travers de la map


 
    public:
        
    Personnage(int id); // Constructeur
    void recevoirDegats(int nombreDegats); // Methode de retrait de vie utilisee par les methodes d'attaque
    void attaquer(Personnage &cible); // methode d'attaque de Personnage
    void guerir(); // methode de soin de personnage
    void regen(); // methode de remise a 100 PV du Personnage
    bool estVivant(); // methode permettant d'evaluer le statut du personnage --> non utile pour le moment
    int get_Id(); // methode permettant de recuperer l'Id du personnage 
    int get_vie(); // methode permettant de consulter la vie du personnage
    int get_degats(); // methode permettant de consulter les degats du Personnage
    int get_X_pos(); // methode permettant de consulter la position en X du Personnage
    int get_Y_pos(); // methode permettant de consulter la position en Y du Personnage
    int get_niveau(); // methode permettant de consulter le niveau du Personnage
    int get_experience(); // methode permettant de consulter l'experience du Personnage
    int get_puissance(); // methode permettant de consulter la puissance du Personnage
    bool get_vivant(); // non utilise pour le moment
    std::string get_sprite(); // Permet de recuperer le sprite du Personnage --> sera utilise pour la partie graphique
    Case get_case(); // Permet de connaitre ma case sur laquelle se situe le Personnage
    void set_case(Case &Case_cible); // Permet de positionner le Personnage sur une Case Precise --> non utilise pour le moment 


    void change_niveau(); // methode pour level up le Personnage
    void go_up(); // methode de deplacement du ërsonnage vers le haut
    void go_down(); // methode de deplacement du ërsonnage vers le bas
    void go_left(); // methode de deplacement du ërsonnage vers la gauche
    void go_right(); // methode de deplacement du ërsonnage vers la droite

    friend void Drop(Personnage &Heros, Personnage &Monstre); // necessite de passer Drop en fonction amie pour modifier les attributs protected depuis l'exterieur
                                                                // obligation de passer par des references pour avoir une modification effective 
    


    ~Personnage(); // destructeur de Personnage
};
#endif