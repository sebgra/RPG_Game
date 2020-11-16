#ifndef DEF_BOSS
#define DEF_BOSS
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Boss : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Boss(int id);
    void coup_fatal(Personnage &cible);
    void soin_boss();

    protected:

    	//bool win;
    	

        
};
 
#endif