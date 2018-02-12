#pragma once
#include "clocktime.h"
#include <string>
#include <cstdlib>

typedef class TimeItem : public clocktime
{
private:
	clocktime* item_init;
	clocktime* item_sort;
protected:
	virtual char* atos(double*, char*);
	virtual void calcTime(char*, double*, int*);
	virtual void calcDiff(double*, int*);
	virtual void calcDiff(int*);
public:
	TimeItem();
	virtual ~TimeItem();
	// init
	void setInit();
	clocktime* GetI();
	void setEndInit();
	char* getInit(char*);
	char* getEndInit(char*);
	// sort
	void setSort();
	clocktime* GetS();
	void setEndSort();
	char* getSort(char*);
	char* getEndSort(char*);
	// diff
	char* getDiffInit(char*);
	char* getDiffSort(char*);
}TimeItem;