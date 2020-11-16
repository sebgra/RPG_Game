#include "Personnage.h"
#include "Magicien.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Magicien::Magicien(int id):Personnage(id) // COnstructuer alternatif
	    {
	     Id = id;
	     m_mana = 100;          
	    };

		int Magicien::get_Mana()
		{
		return m_mana; 
		};


	    void Magicien::BouleDeFeu(Personnage &cible)
	    {
	    	cible.recevoirDegats(15); // a recalculer
	    	m_mana = m_mana - 20;

	    };


	    void Magicien::regen_mana()
	    {

	    	 m_mana = m_mana + 20;

	    	 if (m_mana > 100)
	    	 {
	    	 	m_mana = 100;
	    	 }

	    


	    };

