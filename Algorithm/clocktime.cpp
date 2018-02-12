#include "clocktime.h"

clocktime::clocktime() {
	start = new clock();
	diff = new clock();
	end = new clock();
};

clocktime::~clocktime()
{
	delete start;
	delete diff;
	delete end;
};