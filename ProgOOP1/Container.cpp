#include "Container.h"
Container::Container()
{
	size = 0;
	head = NULL;
}
void Container::Clear()
{
	while (size)
	{
		Node* temp = head;

		head = head->GetNext();
		delete temp;
		/*delete temp->GetSp();
		delete temp;*/

		size--;
	}
}
Node* Container:: GetTail() {
	if (head == NULL)
		return head;
	else
	{
		Node* current = head;
		while (current->GetNext() != NULL)
		{
			current = current->GetNext();
		}
		return current;
	}
	
}
void Container::InsertAfter(Node* leftNode, Node* newNode) {
	/*if (leftContainer != NULL) {
		newContainer->next = leftContainer->next;
		leftContainer->next = newContainer;
	}
	return newContainer;*/
	if (leftNode != NULL)
		leftNode->ChangeNext(newNode);
	else
		leftNode = newNode;
}
void Container::PushBack(Node* newShape) {
	Node* last=this->GetTail();
	this->InsertAfter(last, newShape);
	++size;
	//return InsertAfter(last, newShape);
}
void Container::In(ifstream& ifst) {
	Shape* newShape = NULL;
	while (!ifst.eof()) {
		newShape = newShape->InShape(ifst);
		if (newShape != 0) {
			Node* newNode = new Node(newShape);
			this->PushBack(newNode);
			if (head == NULL)
				head = newNode;
		}
	}
}
int Container::GetLength() {
	
	return size;
}
void Container::Out(ofstream& ofst) {
	int length = this->GetLength();
	ofst << "Container contains " << length << " elements." << endl;
		Node* pointer = head;
	for (int i = 0; i < length; i++) {
		//container* pointer = c;
		ofst << i << ": ";
		pointer->GetSp()->Out(ofst);
		ofst << ", density = " << pointer->GetSp()->GetDensity();
		ofst << ", " << "volume = " << pointer->GetSp()->Volume();
		pointer = pointer->GetNext();
		ofst << endl;
	}
}
Node* Container::NodeAt(int x)
{
	Node* current = head;
	for (int i = 0; i < x; ++i)
	{
		current = current->GetNext();
	}
	return current;
}
void Container::Sort()
{
	for (int i = 0; i < this->size - 1; i++)
	{
		Node* nodeAtI = this->NodeAt(i);
		for (int j = i + 1; j < this->size; j++) {
			Node* nodeAtJ = this->NodeAt(j);
			if (nodeAtI->GetSp()->Compare(nodeAtJ->GetSp())) {
			//if (Compare(nodeAtI->sp, nodeAtJ->sp)) {
				Shape* tmp = nodeAtI->GetSp();
				nodeAtI->ChangeSp(nodeAtJ->GetSp());
				nodeAtJ->ChangeSp(tmp);
				//nodeAtI->GetSp() = nodeAtJ->GetSp();
				//nodeAtJ->GetSp() = tmp;
			}
		}
	}
}