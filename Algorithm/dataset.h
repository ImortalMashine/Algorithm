#pragma once
#include "dataitem.h"

typedef class dataset : public dataitem
{
private:
	dataitem * * list;	// array of datatime
	int* size;			//	lenghth
public:
	dataset(int*);
	virtual ~dataset();
} dataset;

