#include "Hotel.h"

GeoMap::Hotel::Hotel(float lat, float lng, int c, string s, string n, int nmbr)
    :SematicPoint(lat,lng,c,s)
{
    this->nom = n;
    this->nmbreChambre = nmbr;
}

bool GeoMap::Hotel::verifierDispo() const
{
    this->GeoPoint::print();
    bool res = false;
    // traitements 
    return res;
}
