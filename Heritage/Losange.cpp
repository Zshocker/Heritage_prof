#include "Losange.h"
#include<assert.h>
Losange::Losange()
{
	this->sommets = new Point3d * [4];
}

void Losange::addsommets(Point3d* s,int i)
{
	assert(0 <= i < 4);
	for (int i = 0; i <4; i++)
	{
		this->sommets[i] = s;
	}
}
