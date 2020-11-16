#include "Rand.h" // permet de faire le lien avec le .
#include "Personnage.h"
#include "Guerrier.h"
#include "Drop.h"
#include "Combat.h"
#include "Gobelin.h"
#include "Squelette.h"
#include "Araignee.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

Guerrier Heros(1);
Squelette Skull(11);
Araignee Spider(12);
Gobelin Golum(13);

void Deplacement(Personnage Heros) // Definition classique de fonction 

{
	
	srand(time(NULL));
	int monstre_hasard = rand_a_b(0, 3);
	int choix_deplacement;
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
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combattez un squelette" << std::endl;
					Combat(Heros,Skull);
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combattez une araignee" << std::endl;
					Combat(Heros,Spider);
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combattez un gobelin" << std::endl;
					Combat(Heros,Golum);
					Heros.get_case().set_combat_ou_non();
					break;


			}
		}
	}

	if (choix_deplacement == 1)
	{
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl; ////
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl; /////
		Heros.go_right();
		std::cout << "Vous etes allés à droite"<< std::endl;
		std::cout << "------------------------- " << std::endl;
		std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
		std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		std::cout << "Vous etes sur la case numero :" << Heros.get_case().get_numero() << std::endl;

		if (Heros.get_case().get_obstacle())
		{
			Heros.go_left();
			std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
			std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combattez un squelette" << std::endl;
					Combat(Heros,Skull);
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combattez une araignee" << std::endl;
					Combat(Heros,Spider);
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combattez un gobelin" << std::endl;
					Combat(Heros,Golum);
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
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combattez un squelette" << std::endl;
					Combat(Heros,Skull);
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combattez une araignee" << std::endl;
					Combat(Heros,Spider);
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combattez un gobelin" << std::endl;
					Combat(Heros,Golum);
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
		}

		if (Heros.get_case().get_combat_ou_non())
		{
			switch(monstre_hasard)
			{
				case 0 : 
					std::cout << "Vous combattez un squelette" << std::endl;
					Combat(Heros,Skull);
					Heros.get_case().set_combat_ou_non();
					break;

				case 1 : 
					std::cout << "Vous combattez une araignee" << std::endl;
					Combat(Heros,Spider);
					Heros.get_case().set_combat_ou_non();
					break;

				case 2 : 
					std::cout << "Vous combattez un gobelin" << std::endl;
					Combat(Heros,Golum);
					Heros.get_case().set_combat_ou_non();
					break;


			}
		}
	}



	
};

