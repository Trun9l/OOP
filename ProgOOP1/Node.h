#pragma once
#include "Shape.h"
using namespace std;
class Node
{
	Shape* sp;
	Node* next;
public:
	Node() { sp = NULL; next = NULL; };
	~Node() { delete sp; };
	Shape* GetSp();
	Node* GetNext();
	void ChangeNext(Node* newNode);
	Node(Shape* sp=NULL, Node* next = NULL);
	void ChangeSp(Shape* newSp);
};

