#include "TimerTake.h"

//
// Constructor & Destructor
//
TimerTake::TimerTake(int N, int T, bool useSort) 
{
	if (T > 0) {
		size = T;
		for (int i = 0; i < size, i++;)
			this->list[i] = new TimeItem(&N, useSort);
	}
	else {
		size = 1;
		for (int i = 0; i < size, i++;)
			this->list[i] = new TimeItem(&N, useSort);
	}
};

TimerTake::~TimerTake()
{
	for (int i = 0; i < size; i++)
		list[i]->~TimeItem();
	// after list -> NULL
};

//
// Method
//
TimeItem* TimerTake::operator[](int* index)
{
	if (*index < size)
		return this->list[*index];
	else return NULL;
};