#pragma once
class Vehicule
{
public: 
	Vehicule(int);
	virtual void print() const;
	virtual ~Vehicule(); //4
private: 
	int qtef; //4
};

