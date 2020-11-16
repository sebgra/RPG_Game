#ifndef DEF_SQUELETTE
#define DEF_SQUELETTE // definition si non defini
 
#include <iostream>
#include <string>
#include "Personnage.h" // inclusion des classes, fonctions et bibliotheques necessaires
 
class  Squelette : public Personnage // Definition de la classe Squelette qui herite de Personnage
{

 
    

    public:

    Squelette(int id); // identifiant du squelette
    void coup_de_femur(Personnage &cible); // Attaque speciale du Squelette
    void soin_squelette(); // soin special du squelette

    protected:


        
};
 
#endif