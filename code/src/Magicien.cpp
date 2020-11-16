#include "Personnage.h"
#include "Magicien.h"	 // inclusion des classes, fonctions et bibliotheques necessaires
#include <string>

Magicien::Magicien(int id):Personnage(id) // Constructeur 
{
  int Id = id; // identifiant du magicien
 m_mana = 100;   // initialisation de la valeur du mana       
};

int Magicien::get_Mana() // methode permettant d'acceder au mana du magicien
{
return m_mana; 
};


void Magicien::BouleDeFeu(Personnage &cible) // Attaque specifique du Magicien
{
	
	m_mana = m_mana - 20; // consommation de mana en cas d'attaque
	if (m_mana <=0)
	{
		m_mana = 0;
	}

	if (m_mana >= 20)
	{
		cible.recevoirDegats(15); // a recalculer pour equilibrage
	}

	else 
	{
		std::cout << "Vous n'avez pas assez de Mana, votre tour est passe" << std::endl;
	}
	

};

void Magicien::soin_Magicien()
{
	m_vie = m_vie + 3;

	if (m_vie > 100)
	{
		m_vie = 100; 
	}
}


void Magicien::regen_mana() // Methode permettant au magicien de recharge son mana
{

	 m_mana = m_mana + 20;

	 if (m_mana > 100) // permet d'eviter un rechargementen mana au dela de la limite
	 {
	 	m_mana = 100;
	 }




};

