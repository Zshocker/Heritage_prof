#include<iostream>
#include "VoitureVolante.h"

VoitureVolante::VoitureVolante(int R, int h, int k,int q)
	: VehiculeAerienne(h,q),VehiculeTerrestre(k,q),Vehicule(q)
{
	std::cout << "constructeur de la classe VoitureVolante" << std::endl;

	this->nbmRoue = R;
}

void VoitureVolante::print() const
{
	std::cout << "print de la classe VoitureVolante" << std::endl;

	this->VehiculeAerienne::print();
	this->VehiculeTerrestre::print();
}


VoitureVolante::~VoitureVolante()
{
	std::cout << "destructeur de la classe VoitureVolante" << std::endl;

}
