#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN
 
#include <iostream>
#include <string>
#include "Personnage.h"
 
class  Magicien : public Personnage
{

 
    

    public:

    	
    //Guerrier(int id);
    Magicien(int id);
    void BouleDeFeu(Personnage &cible);
    void soin();
    void regen_mana();
    int get_Mana();


    protected:

    	int m_mana;
    	



        
};
 
#endif