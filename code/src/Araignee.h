#ifndef DEF_ARAIGNEE // Definition si non defini
#define DEF_ARAIGNEE
 
#include <iostream>
#include <string>				// Inclusion des headers necessaires
#include "Personnage.h"
 
class  Araignee : public Personnage // definition de la classe Araignee qui herite de Personnage
{

 
    

    public:

    	
    
    Araignee(int id);
    void morsure(Personnage &cible);	 // Prototypage
    void soin_araignee();

    protected:

    //bool drop_ou_pas;
    //int drop_quoi;

        
};
 
#endif