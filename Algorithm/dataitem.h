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

ref class dataitem
{
private:
	datatime* init_time;
	datatime* sort_time;
protected:
	virtual char* atos(int*);
	virtual datatime* calcTime(int*);
public:
	dataitem(int*);
	virtual ~dataitem();
	void setInit(int*);
	void setSort(int*);
	char* getInit();
	char* getSort();
};