#include "TimeItem.h"

//
// Constructor & Destructor
//
TimeItem::TimeItem(int* N, bool useSort) : Queline(N)
{
	item_init = new clocktime();
	item_sort = new clocktime();
/*
	if (useSort) {
		//double begin, end;
		//double max, min, temp;
		//begin = end = 0;
		//max = min = temp = 0;

		//std::chrono::time_point<std::chrono::system_clock> func_start, func_end;
		//	func_start = std::chrono::system_clock::now(); // max min time tick
		Queline* Obj = new Queline(N);
		//	func_end = std::chrono::system_clock::now(); // max min time tick
		//temp = std::chrono::duration_cast<std::chrono::second>(func_end - func_start).count();
		
		//min = std::chrono::duration(std::chrono::duration_values<rep>::min())


		this->setInit(&begin);
		this->setEndInit(&end);
		this->calcDiff(true);

		begin = end = 0;
		
		Obj->sortSHELL();
	}
	else {
		double begin, end, max, min, temp;
		begin = end = max = min = temp = 0;

		clock_t start = std::clock();
			Queline* Obj = new Queline(N);
		clock_t stop = std::clock();
		begin = start / CLOCKS_PER_SEC;
		end = stop / CLOCKS_PER_SEC;

		this->setInit(&begin);
		this->setEndInit(&end);
		this->calcDiff(true);
	};
*/
};

TimeItem::~TimeItem()
{
	item_init->~clocktime();
	item_sort->~clocktime();
	// after item_name -> NULL
};

//
// Method
//

//	PROTECTED
char* TimeItem::atos(int* arg, char* buffer)
{
	if (buffer != NULL && arg != NULL) {
		int syscount = 10;									//	typecont: decimal, hex, bin, oct
		_itoa_s(*arg, buffer, sizeof(buffer), syscount);	//	convert int to char* C++11
	}
	return buffer;
};

void TimeItem::calcTime(bool start, double* value, bool init)
{
	/*
	timer count milisec
	1 sec = 1000 milisec
	1 min = 60 sec
	1 hour = 3600 sec
	*/
	if (value != NULL) {
		if (start) {
			if (init) {
				// start init time
				this->item_init->start->setTime(value);
			}
			else {
				// start sort time
				this->item_sort->start->setTime(value);
			}
		}
		else {
			if (init) {
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

void TimeItem::calcDiff(bool init)
{
	if (this != NULL) {
		if (init) {
			// init time diff
			this->item_init->diff->operator= (this->item_init->end->operator-(this->item_init->start));
		}
		else {
			// sort time diff
			this->item_sort->diff->operator= (this->item_sort->end->operator-(this->item_sort->start));
		}
	}
};

void TimeItem::calcDiff(double* value, bool key)
{
	// diff will precount in type count(hour,min,sec, ect) by extern function
	if (this != NULL)
		if (key)
			this->item_init->diff->setTime(value);
		else
			this->item_sort->diff->setTime(value);
};

//	PUBLIC


//	INIT
void TimeItem::setInit(double* value)
{
	if (this != NULL && value != NULL)
		this->item_init->start->setTime(value);
};

clocktime* TimeItem::GetI()
{
	return this->item_init;
};

void TimeItem::setEndInit(double* value)
{
	if (this != NULL && value != NULL)
		this->item_init->end->setTime(value);
};

void TimeItem::b_inittoline(char* line)
{
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&(this->item_init->start->h), buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->start->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));		//	min
		strncat_s(temp, atos(&this->item_init->start->s, buffer), (unsigned int)sizeof(buffer));					//	sec
		line = temp;
	}
};

void TimeItem::e_inittoline(char* line)
{	
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_init->end->h, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->end->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_init->end->s, buffer), (unsigned int)sizeof(buffer));					//	sec
		line = temp;
	}
};


//	SORT
void TimeItem::setSort(double* value)
{
	if (this != NULL && value != NULL)
		this->item_sort->start->setTime(value);
};

clocktime* TimeItem::GetS()
{
	return this->item_sort;
};

void TimeItem::setEndSort(double* value)
{
	if (this != NULL && value != NULL)
		this->item_sort->end->setTime(value);
};

void TimeItem::b_sorttoline(char* line)
{
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->start->h, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->start->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->start->s, buffer), (unsigned int)sizeof(buffer));				//	sec
		line = temp;
	}
};

void TimeItem::e_sorttoline(char* line)
{
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->end->h, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->end->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->end->s, buffer), (unsigned int)sizeof(buffer));					//	sec
		line = temp;
	}
};


//	DIFF
void TimeItem::idifftoline(char* line)
{
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_init->diff->h, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_init->diff->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_init->diff->s, buffer), (unsigned int)sizeof(buffer));					//	sec
		line = temp;
	}
};

void TimeItem::sdifftoline(char* line)
{
	if (this != NULL) {
		char temp[] = "";
		char buffer[] = "";
		strncpy_s(temp, (atos(&this->item_sort->diff->h, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
		strncat_s(temp, (atos(&this->item_sort->diff->m, buffer) + ':'), (unsigned int)(sizeof(buffer) + 1));	//	min
		strncat_s(temp, atos(&this->item_sort->diff->s, buffer), (unsigned int)sizeof(buffer));					//	sec
		line = temp;
	}
};