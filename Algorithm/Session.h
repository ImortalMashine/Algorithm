#pragma once
#include "TimerTake.h"

typedef class Session
{
private:
	bool useSort;
	int N;
	int T;
	TimerTake* data;
public:
	Session();
	virtual ~Session();
} Session;