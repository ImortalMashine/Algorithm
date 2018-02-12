#pragma once
#include <cstdlib>

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
	TNode * head;
	TNode* tail;
public:
	Queline(int*);
	~Queline();
	int isEmpty();
	void cleanALL(TNode*);
	void add(int*);
	TNode& operator[] (int);
	TNode* getH();
	TNode* getT();
} Queline;