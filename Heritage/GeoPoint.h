#pragma once
namespace GeoMap {
	class GeoPoint
	{
	public:
		GeoPoint(float , float, int);
		GeoPoint();
		GeoPoint(const GeoPoint&);
		GeoPoint& operator=(const GeoPoint&);
		virtual void print()const; 
		~GeoPoint();
	private: void working() const;
  
	private:
		float lat, lng; 
		int *code;
		
	};

};