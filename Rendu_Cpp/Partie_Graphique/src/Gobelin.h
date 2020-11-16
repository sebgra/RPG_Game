#ifndef DEF_GOBELIN
#define DEF_GOBELIN
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Gobelin : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Gobelin(int id);
    void coup_de_dague(Personnage &cible);
    void soin_gobelin();

    protected:

    	//bool drop_ou_pas;
    	//int drop_quoi;

        
};
 
#endif