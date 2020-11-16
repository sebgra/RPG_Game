#ifndef DEF_VOLEUR
#define DEF_VOLEUR // definition si non defini
 
#include <iostream>
#include <string>
#include "Personnage.h" // inclusion des classes, fonctions et bibliotheques necessaires





 
class  Voleur : public Personnage // Definition de la classe Voleur qui herite de Personnage
{

 
    

    public:

    Voleur(int id); // Identifiant du voleur
    void sournoiserie(Personnage &cible); // attaque specifique du Voleur
    void soin_Voleur(); // Soin specifique du Voleur

    //private:

        
};
 
#endif