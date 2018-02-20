#include "TNODE.h"

TNode::TNode() 
{
	data = 0;
	next = NULL;
};

TNode::TNode(int* value) 
{
	data = *value;
	next = NULL;
};

TNode::~TNode()
{
	this->next = NULL;
	this->data = NULL;
	delete this;
};

bool TNode::operator>=(TNode* arg)
{ 
	if (this->data >= arg->data)
		return true;
	else return false;
};

void TNode::operator=(TNode* arg)
{
	this->data = arg->data;
	this->next = arg->next;
};