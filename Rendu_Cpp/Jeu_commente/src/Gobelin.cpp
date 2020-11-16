#include "Personnage.h"
#include "Gobelin.h"		// inclusion des classes, fonctions et bibliotheques necessaires
#include <string>
//Methodes

		


	    Gobelin::Gobelin(int id):Personnage(id) // Constructeur
	    {
	    int Id = id; // identifiant du Gobelin
	    m_vie = 90; // Vie specifique au gobelin
	    m_experience = 12;   // Experience donnee au personnage une fois battu            
	    };

	    void Gobelin::coup_de_dague(Personnage &cible) // methode d'attaque specifique au gobelin
	    {
	    	cible.recevoirDegats(5); // a modifier pour équilibrage
	    	
	    	

	    };


	    void Gobelin::soin_gobelin() // methode de soin specifique au gobelin
	    {


	    	m_vie = m_vie + 3;

	    	if (m_vie > 100)
	    	{
	    		m_vie = 100; // permet de ne pas exceder la vie initiale du gobelin
	    	}
            
	    


	    };

