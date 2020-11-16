#ifndef DEF_OBJECT
#define DEF_OBJECT

#include <iostream>
#include <cstdlib>
#include <string>

class Object
{
	protected : 

		int Id;
		std::string m_name;
		std::string m_sprite;
		std::string m_type;
		int m_boost_vie;
		std::string m_rarete;
		int m_boost_degats;
		int m_boost_puissance;
		float m_drop_rate;
		int m_purchase_price;
		int m_sell_price;




	public : 

		Object(int id);
		std::string get_name();
		std::string get_sprite();
		std::string get_type();
		int get_boost_vie();
		std::string get_rarete();
		int get_boost_degats();
		int get_boost_puissance();
		float get_drop_rate();
		int get_purchase_price();
		int get_sell_price();
		~Object();



};

#endif