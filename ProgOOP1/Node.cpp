#include "Node.h"
Node::Node(Shape* sp , Node* next )
{
	this->sp = sp;
	this->next = next;
}
Shape* Node::GetSp()
{
	return sp;
}
Node* Node::GetNext()
{
	return next;
}
void Node::ChangeNext(Node* newNode)
{
	next = newNode;
}