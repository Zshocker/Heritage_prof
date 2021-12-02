#include <iostream>
#include "VehiculeTerrestre.h"

VehiculeTerrestre::VehiculeTerrestre(int km, int q): Vehicule(q)
{
	std::cout << "constructeur de la classe Terrestre" << std::endl;

	this->km = km;
}

void VehiculeTerrestre::print() const
{
	std::cout << "print de la classe Terrestre" << std::endl;

}

VehiculeTerrestre::~VehiculeTerrestre()
{
	std::cout << "destructeur de la classe Terrestre" << std::endl;
}

