#pragma once
#include"Vehicule.h"
class VehiculeTerrestre: virtual public Vehicule
{
public: 
	VehiculeTerrestre(int km, int q);
	virtual void print() const;
	virtual ~VehiculeTerrestre();

private: 
	int km;
};

