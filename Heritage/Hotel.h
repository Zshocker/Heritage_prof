#pragma once
#include"SematicPoint.h"
namespace GeoMap {
	class Hotel : private SematicPoint
	{
	public: 
		Hotel(float lat, float lng, int c, string s, string n, int nmbr);
		bool verifierDispo() const;
	private: 
		string nom; 
		int nmbreChambre;
	};

};