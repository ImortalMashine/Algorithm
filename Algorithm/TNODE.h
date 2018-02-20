#pragma once
#include <cstdlib>

typedef class TNode
{
public:
	int data;
	TNode* next;
	TNode();
	~TNode();
	TNode(int*);
	bool operator>=(TNode*);
	void operator=(TNode*);
} TNode;