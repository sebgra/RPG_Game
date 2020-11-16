#ifndef DEF_GUERRIER
#define DEF_GUERRIER // definition si non defini
 
#include <iostream>
#include <string>			// inclusion des classes, fonctions et bibliotheques necessaires
#include "Personnage.h"
 
class  Guerrier : public Personnage // Definition de la classe Guerrier qui herite de Personnage
{

 
    

    public:

    	
    Guerrier(int id); // Identifiant du guerrier
    void charge(Personnage &cible,Personnage &lanceur); // attaque specifique du guerrier
    void soin_Guerrier(); // soin specifique du guerrier
    

    //private:

        
};
 
#endif