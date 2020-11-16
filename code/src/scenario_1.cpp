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
#include "Combat.h"
#include <vector>



//#include "Rand.h" // permet de faire le lien avec le .h 


#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{

	Personnage Heros(1);

	std::cout << "------------------------- " << std::endl;
	std::cout << "Quelques caracteristiques : " << std::endl;
	std::cout << "Vie de Heros est:" << Heros->get_vie() << std::endl;
	std::cout << "Degats de Heros est:" << Heros->get_degats() << std::endl;
	std::cout << "X_pos de Heros est:" << Heros->get_X_pos() << std::endl;
	std::cout << "Y_pos de Heros est:" << Heros->get_Y_pos() << std::endl;
	std::cout << "Niveau de Heros est:" << Heros->get_niveau() << std::endl;
	std::cout << "Experience de Heros est:" << Heros->get_experience() << std::endl;
	std::cout << "Puissance de Heros est:" << Heros->get_puissance() << std::endl;
	std::cout << "Vivant de Heros est:" << Heros->get_vivant() << std::endl;
	std::cout << "Sprite de Heros est:" << Heros->get_sprite() << std::endl;

	std::cout << "------------------------- " << std::endl;
}