#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN // definition si non defini
 
#include <iostream>
#include <string>           // inclusion des classes, fonctions et bibliotheques necessaires
#include "Personnage.h"
 
class  Magicien : public Personnage // Definition de la classe Magicien qui herite de Personnage
{

 
    

    public:

    
    Magicien(int id); // Identifiant du Magicien
    void BouleDeFeu(Personnage &cible); // attaque speciale du magicien
    void soin_Magicien(); // Soin specifique du magicien
    void regen_mana(); // Methode permettant de regenerer le mana du magicien
    int get_Mana(); // methode permettant d'acceder a la valeur du mana


    protected:

    	int m_mana; // attribut mana specifique du Magicien
    	



        
};
 
#endif