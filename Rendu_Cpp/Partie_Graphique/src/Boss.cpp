#include "Personnage.h"
#include "Boss.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Boss::Boss(int id):Personnage(id) // COnstructuer alternatif
	    {
	    int Id = id;
	    m_vie = 500;
	    m_experience = 10000;              
	    };

	    void Boss::coup_fatal(Personnage &cible)
	    {
	    	cible.recevoirDegats(15); // a recalculer
	    	
	    	

	    };


	    void Boss::soin_boss()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 500)
            m_vie = 500; 
	    


	    };

