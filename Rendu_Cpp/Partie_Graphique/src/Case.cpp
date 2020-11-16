#include "Case.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <QObject>

    Case::Case(int numero, int X_loc, int Y_loc, bool combat, bool barriere,std::string image)
    {
        Numero = numero;
        m_X_localisation = X_loc; // voir protected
        m_Y_localisation = Y_loc; // a changer
        combat_ou_non = combat;
        obstacle = barriere;
        m_sprite = image;

    };

    //Personnage::Personnage(int id, int vieAtStart, int degatsArmeAtStart)
    //{
    //   m_vie = vieAtStart;
    //   m_degatsArme = degatsArmeAtStart;
    //   persoId = id; 
    //   X_pos = 0;
    //   Y_pos = 0;
    //   niveau = 1;
    //   experience = 0;            
    // };

    int Case::get_numero()
    {
       return Numero; 
    };

    int Case::get_X_localisation()
    {
       return m_X_localisation; 
    };

    int Case::get_Y_localisation()
    {
       return m_Y_localisation; 
    };

    bool Case::get_combat_ou_non()
    {
        return combat_ou_non;
    };

    bool Case::get_obstacle()
    {
        return obstacle;
    };

    std::string Case::get_sprite()
    {
       return  m_sprite ; 
    };

    Case::~Case()                       //destructeur
    {
                           
    };
    
    

	