#pragma once
#include "TimerTake.h"

typedef class Session : public TimerTake
{
private:
	TimerTake * data;
public:
	Session();
	virtual ~Session();
} Session;