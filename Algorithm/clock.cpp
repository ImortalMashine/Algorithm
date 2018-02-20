#include "clock.h"

//
// Constructor
//
clock::clock()
{
	h = 0;
	m = 0;
	s = 0;
};

//
// Method
//
void clock::setTime(double* value)
{
/*
	timer count milisec
	1 sec = 1000 milisec
	1 min = 60 sec
	1 hour = 3600 sec
*/
// use abs() for detect session with -time


	if (value != NULL) {
		// value = second
		int temp = (int)*value;
		this->h = temp / 3600;
		this->m = abs( (this->h * 3600) - temp ) / 60;
		this->s = abs( ((this->h * 3600) + (this->m * 60)) - temp );
	}
};

int clock::isZero()
{
	//  !Zero = 1
	if (this->h || this->m || this->s)
		return 1;
	else return 0;
};

clock* clock::operator- (clock* arg)
{
// use abs() for detect session with -time
	if (this != NULL && this->isZero()) {
		clock* temp = this; // ! this != old this use temp
		this->h = abs( temp->h - arg->h );
		this->m = abs( temp->m - arg->m );
		this->s = abs( temp->s - arg->s );
	}
	return this;
};

void clock::operator= (clock* arg)
{
	if (arg != NULL) {
		this->h = arg->h;
		this->m = arg->m;
		this->s = arg->s;
	};
};