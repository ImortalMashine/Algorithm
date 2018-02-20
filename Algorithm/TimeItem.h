#pragma once
#include "clocktime.h"
#include "Queline.h"
#include <string>
#include <cstdlib>

/*
	Use double biggest common type (input arg)
*/

typedef class TimeItem : public clocktime, Queline
{
private:
	clocktime* item_init;
	clocktime* item_sort;

protected:
	virtual char* atos(int*, char*);
	virtual void calcTime(bool, double*, bool);
	virtual void calcDiff(double*, bool);
	virtual void calcDiff(bool);
public:
	TimeItem(int*,bool);
	virtual ~TimeItem();
	// init
	void setInit(double*);
	clocktime* GetI();
	void setEndInit(double*);
	void b_inittoline(char*);
	void e_inittoline(char*);
	// sort
	void setSort(double*);
	clocktime* GetS();
	void setEndSort(double*);
	void b_sorttoline(char*);
	void e_sorttoline(char*);
	// diff
	void idifftoline(char*);
	void sdifftoline(char*);
}TimeItem;