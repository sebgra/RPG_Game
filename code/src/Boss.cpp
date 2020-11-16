#include "Personnage.h"
#include "Boss.h"			// Inclusion des bibliotheques et classes necessaires
#include <string>



	    Boss::Boss(int id):Personnage(id) // Constructeur du boss
	    {
	    int Id = id;
	    m_vie = 500;				// Definition des attributs aux valeurs specifiques au boss
	    m_experience = 10000;              
	    };

	    void Boss::coup_fatal(Personnage &cible)
	    {
	    	cible.recevoirDegats(15); // A modifier pour equilibrage
	    	
	    	

	    };


	    void Boss::soin_boss()
	    {


	    	m_vie = m_vie + 3; // Methode de soin specifique au boss

	    	if (m_vie > 500)
	    	{
	    		m_vie = 500; // Permet de verifier que le boss ne depasse pas sa vie initiale apres s'etre soigne
	    	}
            
	    


	    };

