#include "Queline.h"

// # Queline
//
// Constructor & Destructor
//

Queline::Queline(int* size)
{
	srand((unsigned int)100); // generator init
	int R = 0; 
	for (int i = 0; i < *size; i++) {
		R = 1 + rand() % 1000;
		this->add(&R);
	};
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

TNode* Queline::operator[] (int index)
{
	if (this->isEmpty()) {
		int i = 0;
		int* q = &index;
		int high = this->length(this->head, &i);

		if (this->isEmpty() && (index <= high))
			return this->get(this->head, q);
		else return NULL;
	}
	else return NULL;
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
		tail = head->next;			//	min queline have (head and next{tail}
	}
};

void Queline::htot(TNode* obj)
{
	if (this != NULL && obj != NULL) {
		if (this->isEmpty()) {
			// head move
			TNode* temp;
			temp = this->head->next;
			this->head = temp;

			//obj to tail
			obj->next = NULL;	// null next pointer
			tail->next = obj;	// create new obj with put data but link -> NULL
			tail = tail->next;	// new tail
		}
		else {
			head = obj;			// init head min queline
			tail = head->next;	//	min queline have (head and next{tail}
		};
	}
};

TNode* Queline::getH()
{
	if (this->isEmpty())
		return this->head;
	else return NULL;
};

TNode* Queline::getT()
{
	if (this->isEmpty() && this->tail != NULL)
		return this->tail;
	else return NULL;
};

int Queline::length(TNode* p, int* i)
{
	if (p != NULL) {
		*i++;
		length(p->next, i);
	};
	return *i;
};

TNode* Queline::get(TNode* p, int* i)
{
	if ( p != NULL && *i != 0) {
		*i--;
		htot(get(p, i));
	}
	else return p;
};

void Queline::shell()
{
	int key; // for length
	if ( this->isEmpty() && this->length(this->head, &key) > 1 ) 
	{
		int i, j, k;
		i = j = k = 0;
		TNode* temp = new TNode();
		int size = this->length(this->head, &i);
		// Gap 'i' between index of the element to be compared, initially lenght/2.
		for (i = size / 2; i > 0; i = i / 2)
		{
			for (j = i; j < size; j++)
			{
				for (k = j - i; k >= 0; k = k - i)
				{
					// If value at higher index is greater, then break the loop.
					if ( this->operator[](k + i)->operator>= (this->operator[](k)) )
						break;
					// Switch the values otherwise.
					else
					{
						temp->operator= ( this->operator[](k) );
						this->operator[](k)->operator= ( this->operator[](k + i) );
						this->operator[](k + i)->operator= ( temp );
					}
				}
			}
		}
		temp->~TNode(); // delete obj
	}
};