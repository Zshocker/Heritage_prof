#include<iostream>
#include "Vehicule.h"

Vehicule::Vehicule(int q)
{
	std::cout << "constructeur de la classe Vehicule" << std::endl;

	this->qtef = q;
}

void Vehicule::print() const
{
}

Vehicule::~Vehicule()
{
	std::cout << "destructeur de la classe Vehicule" << std::endl;
}
