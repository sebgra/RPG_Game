#include "Personnage.h"
#include "Squelette.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Squelette::Squelette(int id):Personnage(id) // COnstructuer alternatif
	    {

	    int Id = id;
	    m_vie = 80;
	    m_experience = 7;            
	    };

	    void Squelette::coup_de_femur(Personnage &cible)
	    {
	    	cible.recevoirDegats(5); // a recalculer
	    	
	    	

	    };


	    void Squelette::soin_squelette()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 80)
            m_vie = 80; 
	    


	    };

