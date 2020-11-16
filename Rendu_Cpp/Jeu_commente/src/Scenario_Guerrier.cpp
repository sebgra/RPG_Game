#include "Rand.h"
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include "Voleur.h"
#include "Squelette.h"
#include "Araignee.h"
#include "Gobelin.h"
#include "Boss.h"
#include "Case.h"
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



void scenario_Guerrier() // fonction retournant un nombre aleatoire entre a et b  


{

	Guerrier Heros(1);
	Squelette Skull(11);
	Araignee Spider(12);
	Gobelin Golum(13);
	Boss Boss_final(100);
	srand(time(NULL));
	int monstre_hasard = rand_a_b(0, 3);
	int choix_deplacement;
	bool continuer = true;


	while(Heros.get_vie()>0 && Boss_final.get_vie()>0 && continuer ==true)
	{
	std::cout << "Ou voulez vous aller  ? 0: Gauche , 1: Droite, 2: Haut, 3: Bas"<< std::endl;

	std::cin >> choix_deplacement; 
		


	if (choix_deplacement == 0)
	{
		Heros.go_left();
		std::cout << "Vous etes allés à gauche"<< std::endl;
		std::cout << "------------------------- " << std::endl;
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;

		if (Heros.get_case().get_obstacle() == true)
		{
			Heros.go_right();
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
					Combat_Guerrier(Heros,Skull);
					if (Heros.get_vie()<=0)
					{
						std::cout << "Vous avez perdu !"<< std::endl;
						continuer = false;
					}
					Heros.get_case().set_combat_ou_non();
					//Heros.regen();
					break;

				case 1 : 
					std::cout << "Vous combatez une araignee" << std::endl;
					Combat_Guerrier(Heros,Spider);
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
					Combat_Guerrier(Heros,Golum);
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

	if (choix_deplacement == 1)
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
					std::cout << "Vous combatez un squelette" << std::endl;
					Combat_Guerrier(Heros,Skull);
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
					Combat_Guerrier(Heros,Spider);
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
					Combat_Guerrier(Heros,Golum);
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

	if (choix_deplacement == 2)
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
					Combat_Guerrier(Heros,Skull);
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
					Combat_Guerrier(Heros,Spider);
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
					Combat_Guerrier(Heros,Golum);
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

	if (choix_deplacement == 3)
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
					Combat_Guerrier(Heros,Skull);
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
					Combat_Guerrier(Heros,Spider);
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
					Combat_Guerrier(Heros,Golum);
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
	

	if (Heros.get_case().get_numero() == 204 )

	{
		 Combat_Guerrier(Heros,Boss_final);


	}

	//std::cout << "Test :" <<Heros.get_vie()<< std::endl;

	if (Heros.get_vie() <= 0)

	{
		std::cout << "Vous avez perdu" << std::endl;
		continuer = false;
		
		

	}

	if (Boss_final.get_vie() <= 0)

	{
		std::cout << "Vous avez gagné !" << std::endl;
		continuer = false;
		
		
	}

	}

	


}


