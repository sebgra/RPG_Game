#ifndef DEF_VOLEUR
#define DEF_VOLEUR
 
#include <iostream>
#include <string>
#include "Personnage.h"





 
class  Voleur : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Voleur(int id);
    void sournoiserie(Personnage &cible);
    void soin();

    //private:

        
};
 
#endif