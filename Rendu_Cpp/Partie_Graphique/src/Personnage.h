#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <cstdlib>
#include <string>
#include "Case.h"

class Personnage
{
    protected: // permet l'acces pour les methodes style soin
    int Id;        
    int m_vie; // voir protected
    int m_degats; // a changer
    int m_X_pos;
    int m_Y_pos;
    int m_niveau;
    int m_experience;
    int m_puissance;
    bool m_est_vivant;

    std::string m_sprite;
    const Case *m_tile; //


 
    public:
        
    Personnage(int id);
    //Personnage(int id, int vieAtStart, int degatsArmeAtStart);
    void recevoirDegats(int nombreDegats);
    void attaquer(Personnage &cible);
    void guerir();
    void regen();
    bool estVivant();
    int get_Id();
    int get_vie(); 
    int get_degats();
    int get_X_pos();
    int get_Y_pos();
    int get_niveau();
    int get_experience();
    int get_puissance();
    bool get_vivant();
    std::string get_sprite();
    Case get_case();
    void set_case(Case &Case_cible);
    //void set_sprite();

    void change_niveau();
    void go_up();
    void go_down();
    void go_left();
    void go_right();

    friend void Drop(Personnage &Heros, Personnage &Monstre); // necessite de passer Drop en fonction amie pour modifier les attributs protected depuis l'exterieur
                                                                // obligation de passer par des references pour avoir une modification effective 
    


    ~Personnage();
};
#endif