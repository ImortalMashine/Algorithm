#pragma once
#include "TimerTake.h"

typedef class Session
{
private:
	TimerTake * data;
public:
	Session();
	virtual ~Session();
} Session;