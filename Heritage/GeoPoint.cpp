#include "GeoPoint.h"
#include <iostream>

using namespace GeoMap;
using namespace std;

GeoMap::GeoPoint::GeoPoint(float lat, float lg, int c)
{
    cout << "constructeur classe de base" << endl;
    this->lat = lat; 
    this->lng = lg; 
    this->code = new int(c);
}

GeoMap::GeoPoint::GeoPoint()
{
}

GeoMap::GeoPoint::GeoPoint(const GeoPoint& P)
{
    this->lat = P.lat;
    this->lng = P.lng;
    if (this->code) {
        delete this->code; 
        this->code = 0;
    }
    this->code = new int(*(P.code));
}

GeoPoint& GeoMap::GeoPoint::operator=(const GeoPoint& P)
{
    if (this != &P) {
        this->lat = P.lat;
        this->lng = P.lng;
        if (this->code) {
            delete this->code;
            this->code = 0;
        }
        this->code = new int(*(P.code));
    }
    return *this;
}

void GeoMap::GeoPoint::print() const
{
    cout << "print de la  classe de base" << endl;
}

GeoMap::GeoPoint::~GeoPoint()
{
    cout << "desctructeur classe de base" << endl;
    // desctructeur
}

void GeoMap::GeoPoint::working() const
{
    // working
}
