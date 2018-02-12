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
char* TimeItem::atos(double* arg, char* buffer)
{
	if (buffer != NULL && arg != NULL) {
		int syscount = 10; //	typecont: decimal, hex, bin, oct
		_itoa_s((int)arg, buffer, sizeof(buffer), syscount);	//	convert int to char* C++11
	}
	return buffer;
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

char* TimeItem::getInit(char* temp)
{
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_init->start->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->start->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_init->start->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
};

char* TimeItem::getEndInit(char* temp)
{	
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_init->end->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->end->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_init->end->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
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

char* TimeItem::getSort(char* temp)
{
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->start->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->start->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->start->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
};

char* TimeItem::getEndSort(char* temp)
{
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->end->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->end->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->end->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
};


//	DIFF
char* TimeItem::getDiffInit(char* temp)
{
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_init->diff->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->diff->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_init->diff->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
};

char* TimeItem::getDiffSort(char* temp)
{
	if (this != NULL) {
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->diff->h, buffer) + ':'), (sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->diff->m, buffer) + ':'), (sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->diff->s, buffer), sizeof(buffer));				//	sec
		return temp;
	}
};