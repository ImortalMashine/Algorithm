#pragma once
#include "clock.h"

typedef class clocktime : public clock
{
// Note 
/*
	struct:
	data(time: {h,m,s});	// init time (timer start)
	link1 diff;				// init time passed timeinit- time end
	link2 end;				// init end of timer (timer end)
*/
public:
	clock * start;
	clock* diff; // difference
	clock* end;
	clocktime();
	virtual ~clocktime();
} clocktime;