#pragma once
#include <cstdlib>
#include <cmath>

typedef class clock
{
public:
	int h;
	int m;
	int s;
	clock();
	void setTime(double*);
	clock* operator- (clock*);
	void operator= (clock*);
	int isZero();
}clock;