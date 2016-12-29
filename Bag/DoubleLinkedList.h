#ifndef DOUBLELINKEDLIST_H //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6 notes
#define DOUBLELINKEDLIST_H
#include "DoubleLinkedList.h"
#include <string>
#include <iostream>
#include "DoubleNode.h"
using namespace std;

class DoubleLinkedList
{
    private:
	DoubleNode *head;
	DoubleNode *tail;
	int totalNodes;
public:
	DoubleLinkedList();
	~DoubleLinkedList();
	void traverseAndPrintForward();
	void traverseAndPrintBackward();
	void addNode(string data);
	bool deleteNode(string data);
};

#endif // DOUBLELINKEDLIST_H
