#include "Personnage.h"
#include "Gobelin.h"
#include <string>
//Methodes

		

		
	// Guerrier::Guerrier(int id):Personnage(int id){} // Constructeur
	//     {
	//         m_vie = 100;                              

	//     m_degatsArme = 10;//NArme.getDegats(); 
	//     persoId = id;           
	//     };

	    Gobelin::Gobelin(int id):Personnage(id) // COnstructuer alternatif
	    {
	    int Id = id;
	    m_vie = 90;
	    m_experience = 12;               
	    };

	    void Gobelin::coup_de_dague(Personnage &cible)
	    {
	    	cible.recevoirDegats(5); // a recalculer
	    	
	    	

	    };


	    void Gobelin::soin_gobelin()
	    {


	    	m_vie = m_vie + 3;
	    	if (m_vie > 100)
            m_vie = 100; 
	    


	    };

