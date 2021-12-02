#include "pch.h"
#include <iostream>
#include "assert.h"
#include "Tableau.h"
using namespace std;

Tableau::Tableau(int size)
{
	assert(size > 0);
	this->taille = size; 
	this->tab = new T[this->taille]();
	/*if (this->tab) {
		for (int i = 0; i < this->taille; i++)
		{
			this->tab[i] = 0;
		}
		
	}*/
}

Tableau::Tableau(const Tableau& Ta)
{
	this->taille = Ta.taille;
	this->tab = new T[this->taille];
	if (this->tab) {
		for (int i = 0; i < this->taille; i++)
		{
			this->tab[i] = Ta.tab[i];
		}
	}
}

Tableau& Tableau::operator=(const Tableau& T1)
{
	if (this != &T1) { // autoaffectation
		this->taille = T1.taille;
		if (this->tab) {
			delete[] this->tab;
			this->tab = 0;
		}
		this->tab = new T[this->taille];
			if (this->tab) {
				for (int i = 0; i < this->taille; i++)
				{
					this->tab[i] = T1.tab[i];
				}
			}
	}

	return *this;


	// TODO: insérer une instruction return ici
}

T& Tableau::operator[](int index) const
{
	assert(index >= 0 && index < this->taille);
	return this->tab[index];
	// this->tab[index] = 1.2;  operator [] de la classe double
	// TODO: insérer une instruction return ici
}

void Tableau::print() const
{
	for (int i = 0; i < this->taille; i++)
	{
		cout<<this->tab[i]<<" ";
	}

}


Tableau::~Tableau()
{
	if (this->tab) {
		delete[] this->tab; 
		this->tab = 0;
   }
}
