#include "Rand.h" // utilisation de la fonction rand_a_b qui permet de generer un nombre aleatoire entre a et b 
#include "Personnage.h"
#include "Drop.h" 
#include <stdio.h>		// inclusion des classes, fonctions et bibliotheques necessaires
#include <stdlib.h>
#include <time.h>



void Combat(Personnage &Heros, Personnage &Monstre) // permet de declencher un combat entre deux personnages selon la mecanique si dessous

{
	srand(time(NULL)); // generation de la graine pour le nombre aleatoire
	int choix_joueur; // variable recuperant le choix du joueur lors du combat

	std::cout << "Fight ! "<< std::endl; // indique au joueur qu'un combat est declenche

	std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl; // rappelle au joueur sa vie
	std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl; // rappelle au joueur la vie du monstre qu'il affronte


	while(Heros.get_vie() > 0 && Monstre.get_vie()> 0) // le combat perdure tant que le joueur et le monstre ont de la vie
	{
		int pattern = rand_a_b(0,1); // genere le choix de l'action du monstre : attaquer ou se soigner
		std::cout << "Que voulez vous faire ? 0: Attaquer , 1: Soin"<< std::endl; // demande au joueur de definir l'action a effectuer

		
		
		std::cin >> choix_joueur; // permet de recuperer le choix du joueur


		if (choix_joueur == 0) // Si le joueur entre 0 --> Attaque
		{
			Heros.attaquer(Monstre); // Appel a la methode d'attaque de personnage
		}

		else if (choix_joueur == 1) // Si le joueur entre 1 --> le personnage est soigné
		{
			Heros.guerir(); // Appel a la methode de soin du personnage
		}


		std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl; // rappel des statuts apres action du joueur
		std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl; 

		if (pattern == 0) // suivant le nombre tire aleatoirement le monstre attaque ou se soigne
		{
			Monstre.attaquer(Heros); // Appel a la methode d'attaque de Personnage
		}

		else if (pattern == 1) // autre cas possible
		{
			Monstre.guerir(); // Appel a la methode de soin de Personnage
		}

		std::cout << "Vie de Heros"<<Heros.get_vie()<< std::endl;     // rappel des statuts apres action du monstre
		std::cout << "Vie de Monstre"<<Monstre.get_vie()<< std::endl; 



	}

	Drop(Heros,Monstre); // Appel a la fonction de drop --> gain d'experience du joueur (le heros "recupere" l'experience du monstre)

	if (Heros.get_vie()>0) // indique l'issue du combat
	{
		std::cout << "Gagne"<< std::endl;
	}

	//Heros.regen();
	//Monstre.regen(); // Pas sur

	std::cout << "Vie de Heros : "<<Heros.get_vie()<< std::endl; // Rappel du statut du joueur


	






	
};

