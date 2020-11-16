#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Personnage.h"
#include "Drop.h"


void Drop(Personnage &Heros, Personnage &Monstre)
{
	Heros.m_puissance = Heros.m_puissance + Monstre.m_puissance;
	Heros.m_experience = Heros.m_experience + Monstre.m_experience;
	Heros.change_niveau();
	//return Heros.m_puissance;
	
}