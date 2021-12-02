#include <iostream>
#include "VehiculeAerienne.h"

VehiculeAerienne::VehiculeAerienne(int nh, int q):Vehicule(q)
{
	std::cout << "constructeur de la classe Aerienne" << std::endl;
	this->nhv = nh;
}

void VehiculeAerienne::print() const
{
	std::cout << "print de la classe Aerienne" << std::endl;

}



VehiculeAerienne::~VehiculeAerienne()
{
	std::cout << "desctructeur de la classe Aerienne" << std::endl;

}
