#include "Object.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


Object::Object(int id)
{
	Id = id;
	m_name = "Object";
	m_sprite = "Object_Sprite";
	m_type = "Type";
	m_boost_vie = 1;
	m_rarete = "Common";
	m_boost_degats = 0;
	m_boost_puissance = 0;
	m_drop_rate = 1;
	m_purchase_price = 0;
	m_sell_price = 0;
}

std::string Object::get_name()
{
	return m_name;
};

std::string Object:: get_sprite()
{
	return m_sprite;
};

std::string Object::get_type()
{
	return m_type;
};

int Object::get_boost_vie()
{
	return m_boost_vie;
};

std::string Object::get_rarete()
{
	return m_rarete;
};

int Object::get_boost_degats()
{
	return m_boost_degats;
};

int Object::get_boost_puissance()
{
	return m_boost_puissance;
};

float Object::get_drop_rate()
{
	return m_drop_rate;
};

int Object::get_purchase_price()
{
	return m_purchase_price;
};

int Object::get_sell_price()
{
	return m_sell_price;
};

Object::~Object() 
{
                       
};