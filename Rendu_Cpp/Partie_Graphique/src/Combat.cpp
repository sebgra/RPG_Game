#include "Rand.h" // permet de faire le lien avec le .
#include "Personnage.h"
#include "Drop.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void Combat(Personnage Heros, Personnage Monstre) // Definition classique de fonction 

{
	srand(time(NULL));
	//srand(time(NULL));
	int choix_joueur;
	std::cout << "Fight ! "<< std::endl;
	std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl; 
	std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl;


	while(Heros.get_vie() > 0 && Monstre.get_vie()> 0)
	{
		int pattern = rand_a_b(0,1);
		std::cout << "Que voulez vous faire ? 0: Attaquer , 1: Soin"<< std::endl; 

		
		
		std::cin >> choix_joueur; 


		if (choix_joueur == 0)
		{
			Heros.attaquer(Monstre);
		}

		else if (choix_joueur == 1)
		{
			Heros.guerir();
		}


		std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl; 
		std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl; 

		if (pattern == 0)
		{
			Monstre.attaquer(Heros);
		}

		else if (pattern == 1)
		{
			Monstre.guerir();
		}

		std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl; 
		std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl; 



	}

	Drop(Heros,Monstre);

	if (Heros.get_vie()>0)
	{
		std::cout << "Gagne"<< std::endl;
	}

	Heros.regen();
	//Monstre.regen(); // Pas sur

	std::cout << "Vie de Heros : "<<Heros.get_vie()<< std::endl; 


	
	//std::cout << pattern<< std::endl;





	
};

