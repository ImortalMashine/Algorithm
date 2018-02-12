#include "Queline.h"

// # Queline
//
// Constructor & Destructor
//

Queline::Queline(int* size)
{
	srand((unsigned int)100); // generator init
	int R = 1 + rand() % 1000;
	for (int i = 0; i < *size; i++)
		this->add(&R);

};

Queline::~Queline()
{
	if (this->isEmpty()) {
		TNode* temp;
		temp = head->next;	// don't lost link next obj
		head->~TNode();					// delete memory from *head (obj)
		head = temp;					// new head elem
	}
};

//
// Methods
//
int Queline::isEmpty()
{
	// empty = false 
	if (this->head != NULL)
		return 1;
	else return 0;
};

void Queline::cleanALL(TNode* p)
{
	if (p != NULL) {
		cleanALL(p->next);
	}
	else delete p;
};

TNode& Queline::operator[] (int index)
{
	//	if you return & you can set and get data from TNODE
	return *(this->head);
};

void Queline::add(int* value)
{
	// Note Struct
	/*
	line list forget about index, not array!

	line list will init from head to tail
	by 1st cycle: init min queline head = tail
	by n cycle: *tail->link(old obj) = new obj
	tail = old obj->link

	*/
	if (this->isEmpty()) {
		tail->next = new TNode(value);	// create new obj with put data but link -> NULL
		tail = tail->next;				// new tail
	}
	else {
		head = new TNode(value);	// init head min queline
		tail = head;			//	min queline have (head = &ObjMemory and tail = &ObjMemory, so head == tail)
	}
};

TNode* Queline::getH()
{
	if (this->isEmpty())
		return this->head;
};

TNode* Queline::getT()
{
	if (this->isEmpty())
		return this->tail;
};