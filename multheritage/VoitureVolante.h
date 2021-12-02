#pragma once
#include "VehiculeAerienne.h"
#include "VehiculeTerrestre.h"
class VoitureVolante:
	public VehiculeTerrestre, public VehiculeAerienne
{

public: 
	VoitureVolante(int R, int h, int K, int q);
	 void print() const;
	~VoitureVolante();
private: 
	int nbmRoue;
};

