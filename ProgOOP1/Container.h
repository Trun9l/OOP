#pragma once
#include "Shape.h"
#include "Node.h"
class Container
{
	int size;
	Node* head;
public:
	Container(); // ������������� ����������
	~Container() { Clear(); } // ���������� ����������
	void Clear();
	Node* GetTail();
	void InsertAfter(Node* leftNode, Node* newNode);
	void PushBack(Node* newShape);
	void In(ifstream& ifst);
	int GetLength();
	void Out(ofstream& ofst);
	void OutBalls(ofstream& ofst);
};

