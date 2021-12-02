#pragma once
#include"Vehicule.h"
class VehiculeAerienne : virtual public Vehicule
{
public: 
	VehiculeAerienne(int, int);
	virtual void print() const;
	virtual ~VehiculeAerienne();// 4+4

private: 
	int nhv; //4
};

