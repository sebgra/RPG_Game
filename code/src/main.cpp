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
#include "Scenario_Guerrier.h"
#include "Scenario_Magicien.h"
#include "Scenario_Voleur.h"
#include "Object.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

 





int main()
{
	//int choix_personnage; // Variable allant reveoir le choix du joueur pour la selection du personnage
	
	// std::cout << "Voici quelques informations concernant les personnages :  \n" << std::endl;
	// std::cout << "L'ensemble des personnages disposent de 100 points de vie, la partie s'arrete lorsque la vie du personnage est a 0 ou en dessous  \n" << std::endl;
	// std::cout << "Chaque personnage dispose d'une capacite d'attaque et une de defense" << std::endl;
	// std::cout << "\t- Le guerrier : son attaque est une charge causant de gros degats (25) mais le blesse en contrepartie (-3PV) \n" << std::endl;
	// std::cout << "\t- Le Magicien : son attaque est une boule de feu faisant 15 degats mais est couteuse en mana (20) qui peut etre recharge a chaque tour\n" << std::endl;
	// std::cout << "\t- Le Voleur : son attaque est sournoiserie faisant 3 degats un nombre aleatoire de fois (entre 1 et 5)\n "  << std::endl;
	// std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;
	// std::cout << "Le but du jeu est d'atteindre le boss en case 204 en se deplacant selon les 4 directions \n" << std::endl;
	// std::cout << "A chaque deplacement un combat peut avoir lieu contre un des adversaires suivants choisis aleatoirement" << std::endl;
	// std::cout << "\t- L'araignee \n" << std::endl;
	// std::cout << "\t- Le squelette\n" << std::endl;
	// std::cout << "\t- Le Gobelin\n "  << std::endl;
	// std::cout << "----------------------------------------------------------------------------------------------------------------------" << std::endl;

	// std::cout << "Veuillez choisir votre personnage : " << std::endl;
	// std::cout << "\t- 0 : Guerrier" << std::endl;
	// std::cout << "\t- 1 : Magicien\n" << std::endl;
	// std::cout << "\t- 2 : Voleur\n "  << std::endl;

	// std::cin >> choix_personnage; // Action de l'utilisateur pour le choix du personnage



	// switch(choix_personnage) // Suivan tle choix du joueur declenchement du scenario approprié
	//     {
	//         case 0 :
	//             scenario_Guerrier();
	//             break;

	//         case 1 :
	//             scenario_Magicien();
	//             break;

	//         case 2 :
	//             scenario_Voleur();
	//             break;
	//        }

	Personnage Heros(1);




	return 0;

};
