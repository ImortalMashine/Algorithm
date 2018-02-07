#include "dataitem.h"
#include <string>

//
// Constructor & Destructor
//
dataitem::dataitem(int* value)
{
	//	Dynamic memory 
	init_time = new datatime;
	sort_time = new datatime;
	calcTime(value); // put data
}

dataitem::~dataitem()
{
	// Clear Memory
	delete init_time;
	delete sort_time;
}

//
//	Methods
//
void dataitem::setInit(int* value) {
	if (value != NULL)
		init_time = calcTime(value); // put data
};

void dataitem::setSort(int* value) {
	if (value != NULL)
		sort_time = calcTime(value); // put data
};

char* dataitem::getInit() {
	char* temp;
	strcpy(temp, (atos(&init_time->h) + ':') );	//	hour
	strcat(temp, (atos(&init_time->m) + ':') );	//	min
	strcat(temp, (atos(&init_time->s)));		//	sec
	return temp;
};

char* dataitem::getSort() {
	char* temp;
	strcpy(temp, (atos(&sort_time->h) + ':'));	//	hour
	strcat(temp, (atos(&sort_time->m) + ':'));	//	min
	strcat(temp, (atos(&sort_time->s)));		//	sec
	return temp;
};

char* dataitem::atos(int* value) {
	char* temp;
	itoa(*value, temp, 10);	//	convert int to char* (int,char,typecont: 10, hex, bin)
	return temp;
};

datatime* dataitem::calcTime(int* value) {
	datatime buffer;
	datatime* p = &buffer;
/*	
	timer count milisec

	1 sec = 1000 milisec
	1 min = 60 sec
	1 hoor = 3600 sec
*/
	int temp = *value / 1000;
	p->h = temp / 3600;
	p->m = ((p->h * 3600) - temp) / 60;
	p->s = ((p->h * 3600) + (p->m * 60)) - temp;
	return p;
};