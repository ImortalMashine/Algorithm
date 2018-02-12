#pragma once
#include <cstdlib>
#include <chrono>
#include <ctime>

typedef struct TNode
{
	int data;
	TNode* next;
	TNode() {
		data = 0;
		next = NULL;
	};
	TNode(int*) {
		data = 0;
		next = NULL;
	};
} TNode;

typedef class Queline : public TNode
{
private:
	TNode* head;
	TNode* tail;
public:
	Queline(int*);
	~Queline();
	void sortSHELL();
	int isEmpty();
	void cleanALL(TNode*);
	void add(int*);
	int getLen();
	TNode& operator[] (int);
	TNode* getH();
	TNode* getT();
} Queline;