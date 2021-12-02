#pragma once
#include "Tableau.h"
class TableauBorne :  private Tableau
{
public: 
	TableauBorne(int, double, double); 
	TableauBorne(const TableauBorne&); 
	TableauBorne& operator=(const TableauBorne&);
	const T& operator[](int index) const;
	void operator()(int index, T val);
	void print() const;
	~TableauBorne();
private: 
	double inf, sup;

};

