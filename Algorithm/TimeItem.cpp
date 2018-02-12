#include "TimeItem.h"

//
// Constructor & Destructor
//
TimeItem::TimeItem()
{
};

TimeItem::~TimeItem()
{
};

//
// Method
//

//	PROTECTED
char* TimeItem::atos(clock*, char*)
{

};

void TimeItem::calcTime(char* c, double* value, int* switchkey)
{
	/*
	timer count milisec
	1 sec = 1000 milisec
	1 min = 60 sec
	1 hour = 3600 sec
	*/
	if (value != NULL && c != NULL && switchkey != NULL) {
		if (*c == 's') {
			if (switchkey) {
				// start init time
				this->item_init->start->setTime(value);
			}
			else {
				// start sort time
				this->item_sort->start->setTime(value);
			}
		}
		if (*c == 'e') {
			if (switchkey) {
				// end init time
				this->item_init->end->setTime(value);
			}
			else {
				// end sort time
				this->item_sort->end->setTime(value);
			}
		}
	}
};

void TimeItem::calcDiff(int* switchkey)
{
	if (this != NULL) {
		if (switchkey) {
			clock* temp = this->item_init->diff;
			// init time diff
			temp->operator= (this->item_init->end->operator-(this->item_init->start));
		}
		else {
			clock* temp = this->item_sort->diff;
			// sort time diff
			temp->operator= (this->item_sort->end->operator-(this->item_sort->start));
		}
	}
};

void TimeItem::calcDiff(double* value, int* switchkey)
{
	// diff will precount in type count(hour,min,sec, ect) by extern function
	if (this != NULL)
		if (switchkey)
			this->item_init->diff->setTime(value);
		else
			this->item_sort->diff->setTime(value);
};

//	PUBLIC


//	INIT
void TimeItem::setInit()
{
};

clocktime* TimeItem::GetI()
{
	return this->item_init;
};

void TimeItem::setEndInit()
{
};

char* TimeItem::getInit()
{
	return this->
};

char* TimeItem::getEndInit()
{
};


//	SORT
void TimeItem::setSort()
{
};

clocktime* TimeItem::GetS()
{
	return this->item_sort;
};

void TimeItem::setEndSort()
{
};

char* TimeItem::getSort()
{
};

char* TimeItem::getEndSort()
{
};


//	DIFF
char* TimeItem::getDiffInit(char* temp)
{
	if (this != NULL)
		return atos(this->item_init->diff, temp);
};

char* TimeItem::getDiffSort(char* temp)
{
	if (this != NULL)
		return atos(this->item_sort->diff, temp);
};