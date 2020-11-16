#include <stdio.h>
#include <stdlib.h>   // inclusion des classes, fontions et bibliotheques necessaires
#include <string>
#include "Personnage.h"
#include "Drop.h"


void Drop(Personnage &Heros, Personnage &Monstre) // meethode permetant d'incrementer les statistiques du personnage en 
													// recuperant celles du monstre
{
	Heros.m_puissance = Heros.m_puissance + Monstre.m_puissance; // increment de puissance
	Heros.m_experience = Heros.m_experience + Monstre.m_experience; // increment d'experience
	Heros.change_niveau(); // permet de faire appel a la methode change niveau de personnage --> lvl up
	
	
}