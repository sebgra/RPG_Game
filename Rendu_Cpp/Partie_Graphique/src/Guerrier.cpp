#include "Personnage.h"
#include "Guerrier.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Guerrier::Guerrier(int id):Personnage(id) // COnstructuer alternatif
	    {
	    	Id = id;
	               
	    };

	    void Guerrier::charge(Personnage &cible, Personnage &lanceur)
	    {
	    	cible.recevoirDegats(5); // a recalculer
	    	m_vie = m_vie-3;
	    	//lanceur.se_blesser(5);

	    };


	    void Guerrier::soin()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 100)
            m_vie = 100; 
	    


	    };

