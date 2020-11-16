#ifndef DEF_CASE
#define DEF_CASE

#include <iostream>
#include <cstdlib>
#include <string>

class Case
{
    protected: // permet l'acces pour les methodes style soin
    int Numero;        
    int m_X_localisation; // voir protected
    int m_Y_localisation; // a changer
    bool combat_ou_non;
    bool obstacle;

    std::string m_sprite;


 
    public:

    Case(int numero, int X_loc, int Y_loc, bool combat, bool barriere,std::string image);
    //Personnage(int id, int vieAtStart, int degatsArmeAtStart);
    int get_numero();
    int get_X_localisation(); 
    int get_Y_localisation();
    bool get_combat_ou_non();
    bool get_obstacle();
    std::string get_sprite();


    


    ~Case();
};
#endif