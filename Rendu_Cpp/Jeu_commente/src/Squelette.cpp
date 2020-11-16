#include "Personnage.h"
#include "Squelette.h"
#include <string>
//Methodes

	    Squelette::Squelette(int id):Personnage(id) // Constructeur 
	    {

	    int Id = id;  // identifiant du Gobelin
	    m_vie = 80; // Vie du squelette --> fixe
	    m_experience = 7; //experience donnee au Personnage une fois battu --> fixe           
	    };

	    void Squelette::coup_de_femur(Personnage &cible) // methode d'attaque specifique au squelette
	    {
	    	cible.recevoirDegats(5); // a recalculer pour equilibrage
	    	
	    };


	    void Squelette::soin_squelette() // methode de soin specifique au Squelette
	    {


	    	m_vie = m_vie + 3;

	    	if (m_vie > 80) // permet de ne pas exceder la vie initiale du Squelette
	    	{
	    		m_vie = 80; 
	    	}

	    };

