#pragma once
#include <cstdlib>
#include <chrono>
#include <ctime>
#include "TNODE.h"

typedef class Queline : public TNode
{
private:
	TNode* head;
	TNode* tail;
public:
	Queline(int*);
	~Queline();
	int isEmpty();
	void cleanALL(TNode*);
	void add(int*);
	void htot(TNode*);
	int length(TNode*,int*);
	void shell();
	TNode* operator[] (int);
	TNode* getH();
	TNode* getT();
	TNode* get(TNode*,int*);
} Queline;