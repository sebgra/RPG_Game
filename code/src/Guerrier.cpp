#include "Personnage.h"
#include "Guerrier.h"  // inclusion des classes, fonctions et bibliotheques necessaires
#include <string>
//Methodes


	    Guerrier::Guerrier(int id):Personnage(id) // COnstructuer 
	    {
	    	int Id = id; // Identifiant du guerrier
	               
	    };

	    void Guerrier::charge(Personnage &cible, Personnage &lanceur) // methode d'attaque specifique du guerrier
	    {
	    	cible.recevoirDegats(25); // a recalculer pour equilibrage
	    	m_vie = m_vie-3; // contre coup de l'attaque
	    	

	    };


	    void Guerrier::soin_Guerrier()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 100)
	    	{
	    		m_vie = 100; 
	    	}
            
	    


	    };

