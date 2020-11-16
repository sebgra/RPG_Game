#include "Personnage.h" // Inclusion de Personnage qui est la classe mère
#include "Araignee.h" // Inclusion du header
#include <string>	// Inclusion pour utilisation de string
//Methodes

		

	    Araignee::Araignee(int id):Personnage(id) // Constructuer alternatif
	    {
	     
	    	int Id = id;	// Identifiant pour l'araigne
	    	m_vie = 110;  // Sa vie
	    	int m_experience = 10;  // Experience donnee une fois battue par le héros
	    };

	    void Araignee::morsure(Personnage &cible) // methode de combat a degats fixes sur le personnage passe par reference
	    {
	    	cible.recevoirDegats(5); // A modifier pour equilibrage
	    	
	    };


	    void Araignee::soin_araignee() // Permet a l'araignee de se soigner durant les combats (cf combats)
	    {

	    	m_vie = m_vie + 3; // A revoir pour equilibrage
	    	
	    	if (m_vie > 110) // Respect de la vie maximale
	    	{
            m_vie = 110; 
	    	}
	    };

