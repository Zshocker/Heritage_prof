#include "pch.h"
#include<assert.h>
#include "TableauBorne.h"

TableauBorne::TableauBorne(int t, double inf, double sup)
	:Tableau(t)
{
	assert(inf < sup);
	//if()
	this->inf = inf; 
	this->sup = sup;
}

TableauBorne::TableauBorne(const TableauBorne& T1)
	:Tableau(T1)
{
	this->inf = T1.inf;
	this->sup = T1.sup;
}

TableauBorne& TableauBorne::operator=(const TableauBorne& T1)
{
	if (this != &T1) {
		this->Tableau::operator=(T1);
		this->inf = T1.inf; 
		this->sup = T1.sup;
	}
	return *this;
	// TODO: insérer une instruction return ici
}

const T& TableauBorne::operator[](int index) const
{
	return this->Tableau::operator[](index);
	// TODO: insérer une instruction return ici
}

void TableauBorne::operator()(int index, T val)
{
	assert(val >= this->inf && val <= this->sup);

	this->Tableau::operator[](index) = val;
}

void TableauBorne::print() const {

	this->Tableau:: print();
}
TableauBorne::~TableauBorne()
{
	// destructeur
}
