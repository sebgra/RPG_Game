#include "Personnage.h"
#include "Voleur.h"
#include <string>

//
#include "Rand.h" // permet de faire le lien avec le .h 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Voleur::Voleur(int id):Personnage(id) // COnstructuer alternatif
	    {
	     
	     int Id = id; 
	                
	    };

	    void Voleur::sournoiserie(Personnage &cible)
	    {
	    	int nb_coups = rand_a_b(1,5);
	    	cible.recevoirDegats(3*nb_coups); // a recalculer
	    	


	    };


	    void Voleur::soin()
	    {


	    	m_vie = m_vie + 1;
	    	if (m_vie > 100)
            m_vie = 100; 
	    


	    };

