#pragma once
#include "GeoPoint.h"
#include<iostream>

using namespace std;
namespace GeoMap {
	class SematicPoint : public  GeoPoint
		// la classe semanticPOint herite de la classe Geopoint
	{
	public:
		SematicPoint(float lat, float lng, int code, string sematic);
		SematicPoint(const SematicPoint&);
		SematicPoint();
		SematicPoint& operator=(const SematicPoint&);
		~SematicPoint();
		void print()const override;
	private:
		string semantic;

	};
};
