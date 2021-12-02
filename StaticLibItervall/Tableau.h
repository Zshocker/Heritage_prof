#pragma once
typedef double T;
class Tableau
{
public: 
	Tableau(int);
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	T& operator[](int index) const;
	void print() const;
	~Tableau();
private: 
	int taille; 
	T* tab;

};

