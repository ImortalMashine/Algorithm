#pragma once
ref class dataset : public dataitem
{
private:
	datatime * * list;	// array of datatime
	int* size;			//	lenghth

public:
	dataset();
	virtual ~dataset();
};

