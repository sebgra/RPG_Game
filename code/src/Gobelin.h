#ifndef DEF_GOBELIN
#define DEF_GOBELIN // definition si non defini
 
#include <iostream>
#include <string> 			// inclusion des classes, fonctions et bibliotheques necessaires
#include "Personnage.h"
 
class  Gobelin : public Personnage // Definition de la classe Gobelin qui herite de Personnage
{

    public:

    	
    Gobelin(int id); // identifiant du Gobelin
    void coup_de_dague(Personnage &cible); // Attaque specifique du Gobelin 
    void soin_gobelin();// Soin specifique du Gobelin 

    protected:

    	//bool drop_ou_pas;   --> Non utilise actuellement, sera implante pour le drop des objets
    	//int drop_quoi;	--> Non utilise actuellement, sera implante pour le drop des objets

        
};
 
#endif