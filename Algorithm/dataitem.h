#pragma once

typedef struct datatime {
	int h;	//	hours
	int m;	//	minutes
	int s;	//	seconds
//	analog constructor
	datatime(){ 
		h = 0;
		m = 0;
		s = 0;
	}
} datatime;

typedef class dataitem
{
private:
	datatime* init_time;
	datatime* sort_time;
protected:
	virtual char* atos(int*,char*);
	virtual dataitem* calcTime(int*,bool);
public:
	dataitem();
	dataitem(int*, bool);
	dataitem* init(int*, bool);
	dataitem* init();
	virtual ~dataitem();
	char* getInit();
	char* getSort();
} dataitem;