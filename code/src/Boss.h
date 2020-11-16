#ifndef DEF_BOSS
#define DEF_BOSS // Definition si non defini
 
#include <iostream>
#include <string>			// Inclusion des bibliotheques et classes necessaires
#include "Personnage.h"
 
class  Boss : public Personnage // Definition de la classe Boss heritant de Personnage
{

 
    

    public:

    	
    Boss(int id); // Identifiant du boss

    
    void coup_fatal(Personnage &cible); // Methode specifique au boss, pouvant one shot --> A implanter
    void soin_boss(); // Methode specifique au boss, pouvant one shot --> A implanter

    protected:

    	// Au besoin 
    	

        
};
 
#endif