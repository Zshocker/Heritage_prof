#include "SematicPoint.h"
using namespace GeoMap;
SematicPoint::SematicPoint(float lat, float lng, int code, string sematic)
	:GeoPoint(lat,lng,code)
{
	cout << "constructeur classe fille" << endl;
	this->semantic = sematic;
}

SematicPoint::SematicPoint(const SematicPoint& p):GeoPoint(p)
{
	this->semantic = p.semantic;
}

SematicPoint& SematicPoint::operator=(const SematicPoint& p)
{
	if (this != &p) {
		this->GeoPoint::operator=(p); 
		this->semantic = p.semantic;
	}
	return *this;
	// TODO: insérer une instruction return ici
}

SematicPoint::~SematicPoint()
{
	
	cout << "desctructeur de la  classe fille" << endl;
}

void SematicPoint::print() const
{
	//this->GeoPoint::print();
	cout << "print de la  classe fille" << endl;
}
