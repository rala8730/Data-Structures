#ifndef SINGLELINKEDLIST_H //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6
#define SINGLELINKEDLIST_H
#include "SingleNode.h"
#include <string>
using namespace std;
class SingleLinkedList
{
private:
	SingleNode *head;
	SingleNode *tail;
	int totalNodes;
public:
	SingleLinkedList();
	~SingleLinkedList();
	void traverseAndPrint();
	void addNode(string data);
	bool deleteNode(string data);
};

#endif // SINGLELINKEDLIST_H
