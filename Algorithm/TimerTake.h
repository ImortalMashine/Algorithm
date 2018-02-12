#pragma once
#include "TimeItem.h"

typedef class TimerTake : public TimeItem
{
private:
	char* timenow;
	clocktime * * item_init;
	clocktime * * item_sort;
	int size;
public:
	TimerTake();
	virtual ~TimerTake();
	clocktime* operator[](int*);
} TimerTake;