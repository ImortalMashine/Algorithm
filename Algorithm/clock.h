#pragma once
#include <cstdlib>
#include <cmath>

typedef class clock
{
public:
	double h;
	double m;
	double s;
	clock();
	void setTime(double*);
	clock* operator- (clock*);
	void operator= (clock*);
	int isZero();
}clock;