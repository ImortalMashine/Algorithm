#include "tableform.h"
#include <string>

class table{
private:
	float* init_time;
	float* sort_time;
public:
	table();
	~table();
	void setInit(float*);
	void setSort(float*);
	string getInit();
	string getSort();
};

//
// Constructor & Destructor
//
table::table() {
//	Dynamic memory 
	init_time = new float;
	sort_time = new float;
//	Initilazation
	*init_time = 0;
	*sort_time = 0;
}

table::~table() {
// Clear Memory
	delete init_time;
	delete sort_time;
}

//
//	Methods
//
void table::setInit(float* value) {
	init_time = value;
};

void table::setSort(float* value) {
	sort_time = value;
};

string table::getInit() {
	string result;
	
	return result = Convert::ToString(*init_time);
};

string table::getSort() {
	string result;

	return result = Convert::ToString(*sort_time);
};
