#include "dataset.h"

dataset::dataset(int* size)
{
	for (int i = 0; i < *size; i++)
		list[i]->init();	// put data
};


dataset::~dataset()
{
	delete [] list;	//	clean memory
};