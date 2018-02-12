#pragma once
#include "clocktime.h"
#include "Queline.h"
#include <string>
#include <cstdlib>

typedef class TimeItem : public clocktime, Queline
{
private:
	clocktime* item_init;
	clocktime* item_sort;

protected:
	virtual char* atos(double*, char*);
	virtual void calcTime(char, double*, bool);
	virtual void calcDiff(double*, bool);
	virtual void calcDiff(bool);
public:
	TimeItem(int*,bool);
	virtual ~TimeItem();
	// init
	void setInit(double*);
	clocktime* GetI();
	void setEndInit(double*);
	char* getInit(char*);
	char* getEndInit(char*);
	// sort
	void setSort(double*);
	clocktime* GetS();
	void setEndSort(double*);
	char* getSort(char*);
	char* getEndSort(char*);
	// diff
	char* getDiffInit(char*);
	char* getDiffSort(char*);
}TimeItem;