#include "Rand.h"
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include "Voleur.h"
#include "Squelette.h"
#include "Araignee.h"
#include "Gobelin.h"
#include "Boss.h"
#include "Case.h"				// Inclusion des fonctions, bibliotheques et Classes necessaires
#include <time.h>
#include "Drop.h"
#include "Combat_Guerrier.h"
#include "Combat_Magicien.h"
#include "Combat_Voleur.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



void scenario_Voleur() // Corps du scénario

{
	Voleur Heros(1); // creation du heros, ici un voleur
	Squelette Skull(11); // Creation de l'ensemble des monstres du jeu
	Araignee Spider(12); // Creation de l'ensemble des monstres du jeu
	Gobelin Golum(13); // Creation de l'ensemble des monstres du jeu
	Boss Boss_final(100); // Creation de l'ensemble des monstres du jeu
	srand(time(NULL)); // Initialisation de la seed pour le random
	int monstre_hasard = rand_a_b(0, 3); // variable contenant une reference a un cas de figure correspondant au tirage aleatoire d'un monstre pour le combat
	int choix_deplacement; // Variable allant recevoir le choix du joueur pour le deplacement
	bool continuer = true; // detecteur de fon de partie


	while(Heros.get_vie()>0 && Boss_final.get_vie()>0 && continuer ==true) // permet d'enchainer les deplacements et combats tant que le héros ou le boss ne sont pas morts
	{
	std::cout << "Ou voulez vous aller  ? 0: Gauche , 1: Droite, 2: Haut, 3: Bas"<< std::endl; // Propositions des possibilités de deplacement

	std::cin >> choix_deplacement; // reception du choix du joueur
		


	if (choix_deplacement == 0) // Cas ou le joueur souhaite aller a gauche
	{
		Heros.go_left(); // Le joueur va a gauche
		std::cout << "Vous etes allés à gauche"<< std::endl; // Rappel de l'action effectuee
		std::cout << "------------------------- " << std::endl;
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl; // Affichage de la nouvelle position
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl; // Affichage de la case ou se trouve le joueur

		if (Heros.get_case().get_obstacle() == true) // Si le joueur rencontr eun obstacle ...
		{
			Heros.go_right(); // ... on fait machine arriere
			std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl; // Rappels sur la position du joueur
			std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
			std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;
		}

		if (Heros.get_case().get_combat_ou_non()) // Si il y a combat
		{
			switch(monstre_hasard) // on evalue le tirage du monstre choisi
			{
				case 0 : // Ici le monstre est un squelette(monstre hasard = 0)
					std::cout << "Vous combatez un squelette" << std::endl; // On indique au joueur son ennemi
					Combat_Voleur(Heros,Skull); // le combat est declenche
					if (Heros.get_vie()<=0) // Evaluation de l'etat du joueur, ici le game over
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false; // on met fin à la partie
					}
					Heros.get_case().set_combat_ou_non();// inutilise pour le moment
					//Heros.regen();
					break;

				case 1 : // Ici le monstre est une araignee --> meme mecanique
					std::cout << "Vous combatez une araignee" << std::endl;
					Combat_Voleur(Heros,Spider);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : // Ici le monstre est un gobelin --> meme mecanique 
					std::cout << "Vous combatez un gobelin" << std::endl;
					Combat_Voleur(Heros,Golum);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					
					break;


			}
		}
	}

	if (choix_deplacement == 1) // Cas ou le joueur souhaite aller a droite --> meme mecanique que precedemment
	{
		//std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl; ////
		//std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl; /////
		Heros.go_right();
		std::cout << "Vous etes allés à droite"<< std::endl;
		std::cout << "------------------------- " << std::endl;
		//std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
		//std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		//std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;

		if (Heros.get_case().get_obstacle())
		{
			Heros.go_left();
			std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
			std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
			std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous Combat_Guerriertez un squelette" << std::endl;
					Combat_Voleur(Heros,Skull);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combatez une araignee" << std::endl;
					Combat_Voleur(Heros,Spider);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combatez un gobelin" << std::endl;
					Combat_Voleur(Heros,Golum);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;


			}
		}
	}

	if (choix_deplacement == 2) // Cas ou le joueur souhaite aller en haut --> meme mecanique que precedemment
	{
		Heros.go_up();
		std::cout << "Vous etes allés en haut"<< std::endl;
		std::cout << "------------------------- " << std::endl;
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;

		if (Heros.get_case().get_obstacle())
		{
			Heros.go_down();
			std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
			std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
			std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combatez un squelette" << std::endl;
					Combat_Voleur(Heros,Skull);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combatez une araignee" << std::endl;
					Combat_Voleur(Heros,Spider);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combatez un gobelin" << std::endl;
					Combat_Voleur(Heros,Golum);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;


			}
		}
	}

	if (choix_deplacement == 3) // Cas ou le joueur souhaite aller en bas --> meme mecanique que precedemment
	{
		Heros.go_down();
		std::cout << "Vous etes allés en bas"<< std::endl;
		std::cout << "------------------------- " << std::endl;
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;

		if (Heros.get_case().get_obstacle())
		{
			Heros.go_up();
			std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
			std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
			std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combatez un squelette" << std::endl;
					Combat_Voleur(Heros,Skull);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combatez une araignee" << std::endl;
					Combat_Voleur(Heros,Spider);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combatez un gobelin" << std::endl;
					Combat_Voleur(Heros,Golum);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					Heros.get_case().set_combat_ou_non();
					break;


			}
		}
	}
	

	if (Heros.get_case().get_numero() == 204 ) // On evalue si le joueur a atteint le boss

	{
		 Combat_Voleur(Heros,Boss_final); // si oui on déclenche le combat contre le boss


	}



	if (Heros.get_vie() <= 0)

	{
		std::cout << "Vous avez perdu" << std::endl; // message de Game Over, on arrete la partie
		continuer = false;
		
		

	}

	if (Boss_final.get_vie() <= 0)

	{
		std::cout << "Vous avez gagné !" << std::endl; // message de partie gagnee
		continuer = false; // fin de partie
		
		
	}

	}

	

	

}


