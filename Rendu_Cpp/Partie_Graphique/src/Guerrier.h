#ifndef DEF_GUERRIER
#define DEF_GUERRIER
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Guerrier : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Guerrier(int id);
    void charge(Personnage &cible,Personnage &lanceur);
    void soin();

    //private:

        
};
 
#endif