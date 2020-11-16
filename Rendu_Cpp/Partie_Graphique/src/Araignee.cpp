#include "Personnage.h"
#include "Araignee.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Araignee::Araignee(int id):Personnage(id) // COnstructuer alternatif
	    {
	     
	     int Id = id;
	     m_vie = 110; 
	     int m_experience = 10;            
	    };

	    void Araignee::morsure(Personnage &cible)
	    {
	    	cible.recevoirDegats(5); // a recalculer
	    	
	    	

	    };


	    void Araignee::soin_araignee()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 100)
            m_vie = 100; 
	    


	    };

