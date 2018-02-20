#pragma once
#include "TimeItem.h"

typedef class TimerTake
{
private:
	char* timenow;
	TimeItem** list;
	int size;
public:
	TimerTake(int,int,bool);
	virtual ~TimerTake();
	TimeItem* operator[](int*);
} TimerTake;