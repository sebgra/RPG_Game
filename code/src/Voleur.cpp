#include "Personnage.h"
#include "Voleur.h"
#include <string>
#include "Rand.h" // inclusion des classes, fonctions et bibliotheques necessaires
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


	    Voleur::Voleur(int id):Personnage(id) // Constructeur
	    {
	     
	     int Id = id; // Identifiant du guerrier
	                
	    };

	    void Voleur::sournoiserie(Personnage &cible) // methode d'attaque specifique du guerrier
	    {
	    	int nb_coups = rand_a_b(1,5);
	    	cible.recevoirDegats(3*nb_coups); // a recalculer pour equilibrage --> Idee :  generer des degats aleatoires
	    	


	    };


	    void Voleur::soin_Voleur() // methode de soin specifique du voleur
	    {


	    	m_vie = m_vie + 1;
	    	if (m_vie > 100)
	    	{
	    		m_vie = 100;  // Permet d'eviter de depasse la vie max du voleur
	    	}
            
	    


	    };

