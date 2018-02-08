#include "dataitem.h"
#include <string>
#include <cstdlib>

//
// Constructor & Destructor
//
dataitem::dataitem()
{
	init_time = new datatime;
	sort_time = new datatime;
}

dataitem::dataitem(int* value, bool key)
{
//	Dynamic memory 
	init_time = new datatime;
	sort_time = new datatime;
	calcTime(value, key); // put data
}

dataitem::~dataitem()
{
// Clear Memory
	delete init_time;
	delete sort_time;
}

//
//	analog constructor for dynamic arrays
//
dataitem* dataitem::init(int* value, bool key)
{
	this->calcTime(value, key);
	return this;
}

dataitem* dataitem::init()
{
//	initilize in struct -> fields = 0;
	this->init_time = new datatime;
	this->sort_time = new datatime;
	return this;
}

//
//	Methods
//
char* dataitem::getInit() {
	char temp[] = "";
	char buffer[] = "";
	strncpy_s(temp,		(atos(&init_time->h, buffer) + ':'),	(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
	strncat_s(temp,		(atos(&init_time->m, buffer) + ':'),	(sizeof(buffer) + 1));	//	min
	strncat_s(temp,		atos(&init_time->s, buffer),			sizeof(buffer) );		//	sec
	return temp;
};

char* dataitem::getSort() {
	char temp[] = "";
	char buffer[] = "";
	strncpy_s(temp,		(atos(&sort_time->h , buffer) + ':'),	(sizeof(buffer) + 1));	//	hour	/ size+1 ':'
	strncat_s(temp,		(atos(&sort_time->m, buffer) + ':'),	(sizeof(buffer) + 1));	//	min
	strncat_s(temp,		atos(&sort_time->s, buffer),			sizeof(buffer));		//	sec
	return temp;
};

char* dataitem::atos(int* value, char* buffer) {
	if (buffer != NULL && value != NULL) {
		int syscount = 10;	//	typecont: decimal, hex, bin, oct
		_itoa_s(*value, buffer, sizeof(buffer), syscount);	//	convert int to char* C++11
	}
	return buffer;
};

dataitem* dataitem::calcTime(int* value,bool key) {
/*	
	timer count milisec

	1 sec = 1000 milisec
	1 min = 60 sec
	1 hoor = 3600 sec
*/
	if (value != NULL) {
	int temp = *value / 1000;
		if (key) {
			// init time
			this->init_time->h = temp / 3600;
			this->init_time->m = ((this->init_time->h * 3600) - temp) / 60;
			this->init_time->s = ((this->init_time->h * 3600) + (this->init_time->m * 60)) - temp;
		}
		else {
			// sort time
			this->sort_time->h = temp / 3600;
			this->sort_time->m = ((this->sort_time->h * 3600) - temp) / 60;
			this->sort_time->s = ((this->sort_time->h * 3600) + (this->sort_time->m * 60)) - temp;
		}
	}
	return this;
};