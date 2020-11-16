#ifndef DEF_ARAIGNEE
#define DEF_ARAIGNEE
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Araignee : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Araignee(int id);
    void morsure(Personnage &cible);
    void soin_araignee();

    protected:

    //bool drop_ou_pas;
    //int drop_quoi;

        
};
 
#endif