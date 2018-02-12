#pragma once
#include "clocktime.h"

typedef class TimeItem : public clocktime
{
private:
	clocktime* item_init;
	clocktime* item_sort;
protected:
	virtual char* atos(clock*, char*);
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
	char* getInit();
	char* getEndInit();
	// sort
	void setSort();
	clocktime* GetS();
	void setEndSort();
	char* getSort();
	char* getEndSort();
	// diff
	char* getDiffInit(char*);
	char* getDiffSort(char*);
}TimeItem;