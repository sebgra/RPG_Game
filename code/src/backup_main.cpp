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

	// Squelette Oscar = Squelette(11);
	// Personnage *Heros(0);
	// int choix_personnage;
	// std::cout << "Quel personnage voulez-vous selectionner  ? 0: Guerrier , 1: Magicien, 2: Voleur "<< std::endl; 

		
		
	// std::cin >> choix_personnage;

	// if (choix_personnage == 0)
	// 	{
	// 		Heros = new Guerrier(0);
	// 	}

	// if (choix_personnage == 1)
	// 	{
	// 		Heros = new Magicien(1);
	// 	}

	// if (choix_personnage == 2)
	// 	{
	// 		Heros = new Voleur(2);
	// 	}

	// std::cout << "Vous avez selectionne un personnage de type : "<< Heros->get_Id() << std::endl;

	// std::cout << "------------------------- " << std::endl;
	// std::cout << "Quelques caracteristiques : " << std::endl;
	// std::cout << "Vie de Heros est:" << Heros->get_vie() << std::endl;
	// std::cout << "Degats de Heros est:" << Heros->get_degats() << std::endl;
	// std::cout << "X_pos de Heros est:" << Heros->get_X_pos() << std::endl;
	// std::cout << "Y_pos de Heros est:" << Heros->get_Y_pos() << std::endl;
	// std::cout << "Niveau de Heros est:" << Heros->get_niveau() << std::endl;
	// std::cout << "Experience de Heros est:" << Heros->get_experience() << std::endl;
	// std::cout << "Puissance de Heros est:" << Heros->get_puissance() << std::endl;
	// std::cout << "Vivant de Heros est:" << Heros->get_vivant() << std::endl;
	// std::cout << "Sprite de Heros est:" << Heros->get_sprite() << std::endl;

	// std::cout << "------------------------- " << std::endl;

	// Heros->BouleDeFeu(Oscar);





	// std::vector<Case> Carte(2,Case(1, 0, 0,false, false,"plop")); // test de la carte

	// std::cout << " Numero de Case_1 : " << Carte[0].get_numero() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[0].get_X_localisation() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[0].get_Y_localisation() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[0].get_combat_ou_non() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[0].get_obstacle() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[0].get_sprite() << std::endl;

	// std::cout << "------------------------- " << std::endl;

	// Carte[1] = Case(1, 0, 0,false, false,"test");
	// std::cout << " Numero de Case_1 : " << Carte[1].get_numero() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[1].get_X_localisation() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[1].get_Y_localisation() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[1].get_combat_ou_non() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[1].get_obstacle() << std::endl;
	// std::cout << " Numero de Case_1 : " << Carte[1].get_sprite() << std::endl;

	// std::cout << "------------------------- " << std::endl;

	// // test de la case de depart inclue dans personnage ///



	// int A = rand_a_b(0,6);
	// std::cout << "A vaut:" << A << std::endl;

	// // Guerrier Heros = Guerrier(1);
	// // Personnage Mechant = Personnage(2);
	// // Magicien Merlin = Magicien(3);
	// // Voleur Robin = Voleur(4);
	// // Squelette Oscar = Squelette(11);
	// // Araignee Lucifer = Araignee(12);
	// // Gobelin Marcel = Gobelin(13);
	// // Boss Jojo = Boss(14);

	// std::cout << " Numero de Case initiale du personnage : " << Heros.get_case().get_numero() << std::endl;


	// Heros.set_case(Carte[1]);

	// std::cout << " Numero de Case initiale du personnage : " << Heros.get_case().get_numero() << std::endl;
	// std::cout << " Sprite initiale du personnage : " << Heros.get_case().get_sprite() << std::endl;

	// // std::cout << "Id de Heros est:" << Heros.get_Id() << std::endl;
	// // std::cout << "Vie de Heros est:" << Heros.get_vie() << std::endl;
	// // std::cout << "Degats de Heros est:" << Heros.get_degats() << std::endl;
	// // std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Heros est:" << Heros.get_niveau() << std::endl;
	// // std::cout << "Experience de Heros est:" << Heros.get_experience() << std::endl;
	// // std::cout << "Puissance de Heros est:" << Heros.get_puissance() << std::endl;
	// // std::cout << "Vivant de Heros est:" << Heros.get_vivant() << std::endl;
	// // std::cout << "Sprite de Heros est:" << Heros.get_sprite() << std::endl;

	// // std::cout << "Id de Mechant est:" << Mechant.get_Id() << std::endl;
	// // std::cout << "Vie de Mechant est:" << Mechant.get_vie() << std::endl;
	// // std::cout << "Degats de Mechant est:" << Mechant.get_degats() << std::endl;
	// // std::cout << "X_pos de Mechant est:" << Mechant.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Mechant est:" << Mechant.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Mechant est:" << Mechant.get_niveau() << std::endl;
	// // std::cout << "Experience de Mechant est:" << Mechant.get_experience() << std::endl;
	// // std::cout << "Puissance de Mechant est:" << Mechant.get_puissance() << std::endl;
	// // std::cout << "Vivant de Mechant est:" << Mechant.get_vivant() << std::endl;
	// // std::cout << "Sprite de Mechant est:" << Mechant.get_sprite() << std::endl;


	// Heros.charge(Mechant,Heros);

	// // std::cout << "Id de Heros est:" << Heros.get_Id() << std::endl;
	// // std::cout << "Vie de Heros est:" << Heros.get_vie() << std::endl;
	// // std::cout << "Degats de Heros est:" << Heros.get_degats() << std::endl;
	// // std::cout << "X_pos de Heros est:" << Heros.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Heros est:" << Heros.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Heros est:" << Heros.get_niveau() << std::endl;
	// // std::cout << "Experience de Heros est:" << Heros.get_experience() << std::endl;
	// // std::cout << "Puissance de Heros est:" << Heros.get_puissance() << std::endl;
	// // std::cout << "Vivant de Heros est:" << Heros.get_vivant() << std::endl;
	// // std::cout << "Sprite de Heros est:" << Heros.get_sprite() << std::endl;

	// // std::cout << "Id de Mechant est:" << Mechant.get_Id() << std::endl;
	// // std::cout << "Vie de Mechant est:" << Mechant.get_vie() << std::endl;
	// // std::cout << "Degats de Mechant est:" << Mechant.get_degats() << std::endl;
	// // std::cout << "X_pos de Mechant est:" << Mechant.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Mechant est:" << Mechant.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Mechant est:" << Mechant.get_niveau() << std::endl;
	// // std::cout << "Experience de Mechant est:" << Mechant.get_experience() << std::endl;
	// // std::cout << "Puissance de Mechant est:" << Mechant.get_puissance() << std::endl;
	// // std::cout << "Vivant de Mechant est:" << Mechant.get_vivant() << std::endl;
	// // std::cout << "Sprite de Mechant est:" << Mechant.get_sprite() << std::endl;

	// // std::cout << "Id de Merlin est:" << Merlin.get_Id() << std::endl;
	// // std::cout << "Vie de Merlin est:" << Merlin.get_vie() << std::endl;
	// // std::cout << "Degats de Merlin est:" << Merlin.get_degats() << std::endl;
	// // std::cout << "X_pos de Merlin est:" << Merlin.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Merlin est:" << Merlin.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Merlin est:" << Merlin.get_niveau() << std::endl;
	// // std::cout << "Experience de Merlin est:" << Merlin.get_experience() << std::endl;
	// // std::cout << "Puissance de Merlin est:" << Merlin.get_puissance() << std::endl;
	// // std::cout << "Vivant de Merlin est:" << Merlin.get_vivant() << std::endl;
	// // std::cout << "Sprite de Merlin est:" << Merlin.get_sprite() << std::endl;

	// Merlin.BouleDeFeu(Mechant);

	// // std::cout << "Id de Mechant est:" << Mechant.get_Id() << std::endl;
	// // std::cout << "Vie de Mechant est:" << Mechant.get_vie() << std::endl;
	// // std::cout << "Degats de Mechant est:" << Mechant.get_degats() << std::endl;
	// // std::cout << "X_pos de Mechant est:" << Mechant.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Mechant est:" << Mechant.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Mechant est:" << Mechant.get_niveau() << std::endl;
	// // std::cout << "Experience de Mechant est:" << Mechant.get_experience() << std::endl;
	// // std::cout << "Puissance de Mechant est:" << Mechant.get_puissance() << std::endl;
	// // std::cout << "Vivant de Mechant est:" << Mechant.get_vivant() << std::endl;
	// // std::cout << "Sprite de Mechant est:" << Mechant.get_sprite() << std::endl;

	// // std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// // std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// // std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// // std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// // std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// // std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// // std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// // std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Robin.sournoiserie(Mechant);

	// // std::cout << "Id de Mechant est:" << Mechant.get_Id() << std::endl;
	// // std::cout << "Vie de Mechant est:" << Mechant.get_vie() << std::endl;
	// // std::cout << "Degats de Mechant est:" << Mechant.get_degats() << std::endl;
	// // std::cout << "X_pos de Mechant est:" << Mechant.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Mechant est:" << Mechant.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Mechant est:" << Mechant.get_niveau() << std::endl;
	// // std::cout << "Experience de Mechant est:" << Mechant.get_experience() << std::endl;
	// // std::cout << "Puissance de Mechant est:" << Mechant.get_puissance() << std::endl;
	// // std::cout << "Vivant de Mechant est:" << Mechant.get_vivant() << std::endl;
	// // std::cout << "Sprite de Mechant est:" << Mechant.get_sprite() << std::endl;

	// // std::cout << "Id de Oscar est:" << Oscar.get_Id() << std::endl;
	// // std::cout << "Vie de Oscar est:" << Oscar.get_vie() << std::endl;
	// // std::cout << "Degats de Oscar est:" << Oscar.get_degats() << std::endl;
	// // std::cout << "X_pos de Oscar est:" << Oscar.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Oscar est:" << Oscar.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Oscar est:" << Oscar.get_niveau() << std::endl;
	// // std::cout << "Experience de Oscar est:" << Oscar.get_experience() << std::endl;
	// // std::cout << "Puissance de Oscar est:" << Oscar.get_puissance() << std::endl;
	// // std::cout << "Vivant de Oscar est:" << Oscar.get_vivant() << std::endl;
	// // std::cout << "Sprite de Oscar est:" << Oscar.get_sprite() << std::endl;

	// Oscar.coup_de_femur(Robin);

	// // std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// // std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// // std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// // std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// // std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// // std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// // std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// // std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Lucifer.morsure(Robin);

	// // std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// // std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// // std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// // std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// // std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// // std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// // std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// // std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Marcel.coup_de_dague(Robin);

	// // std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// // std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// // std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// // std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// // std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// // std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// // std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// // std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// // std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// // std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Jojo.coup_fatal(Robin);
	// std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Drop(Robin,Jojo);

	// std::cout << "Id de Robin est:" << Robin.get_Id() << std::endl;
	// std::cout << "Vie de Robin est:" << Robin.get_vie() << std::endl;
	// std::cout << "Degats de Robin est:" << Robin.get_degats() << std::endl;
	// std::cout << "X_pos de Robin est:" << Robin.get_X_pos() << std::endl;
	// std::cout << "Y_pos de Robin est:" << Robin.get_Y_pos() << std::endl;
	// std::cout << "Niveau de Robin est:" << Robin.get_niveau() << std::endl;
	// std::cout << "Experience de Robin est:" << Robin.get_experience() << std::endl;
	// std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;
	// std::cout << "Vivant de Robin est:" << Robin.get_vivant() << std::endl;
	// std::cout << "Sprite de Robin est:" << Robin.get_sprite() << std::endl;

	// Combat(Robin,Oscar);

	// std::cout << "Puissance de Robin est:" << Robin.get_puissance() << std::endl;


}