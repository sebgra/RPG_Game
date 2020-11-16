#include "Case.h"

#include <iostream>
#include <cstdlib>
#include <string>

    Case::Case(int numero, int X_loc, int Y_loc, bool combat, bool barriere,std::string image) 
    {
        m_numero = numero;
        m_X_localisation = X_loc; 
        m_Y_localisation = Y_loc; 
        combat_ou_non = combat;
        obstacle = barriere;
        m_sprite = image;

    };

    int Case::get_numero() // permet de recuperer le numero de la case
    {
       return m_numero; 
    };

    int Case::get_X_localisation() // permet de recuperer la position de la case
    {
       return m_X_localisation; 
    };

    int Case::get_Y_localisation()// permet de recuperer la position de la case
    {
       return m_Y_localisation; 
    };

    bool Case::get_combat_ou_non() // permet de savoir si il y a combat ou non
    {
        return combat_ou_non;
    };

    bool Case::get_obstacle() // permet de savoir si il y a un obstacle ou non
    {
        return obstacle;
    };
    void Case::set_combat_ou_non() // Non utilise pour le moment, permettra de retirer le monstre une fois battu
    {
        combat_ou_non = false;
    }

    std::string Case::get_sprite() // permet de renvoyer le sprite correspondant au positionnement du heros sur la carte --> partie graphique
    {
       return m_sprite; 
    };

    Case::~Case()                       //destructeur
    {
                           
    };
    
    

	