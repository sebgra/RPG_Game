#ifndef DEF_SQUELETTE
#define DEF_SQUELETTE
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Squelette : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Squelette(int id);
    void coup_de_femur(Personnage &cible);
    void soin_squelette();

    protected:

    //bool drop_ou_pas;
    //int drop_quoi;

        
};
 
#endif