#ifndef SINGLENODE_H //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6 note
#define SINGLENODE_H
#include <string>
#include <iostream>
//#include "SingleLinkedListStack.h"
using namespace std;


class SingleNode
{
    public:

        SingleNode() { nextNode = NULL; }
        SingleNode(int s) { value = s; nextNode = NULL; previousNode = NULL;}
        //SingleNode(int s) { value = s; /*previousNode = NULL;*/}
        int getValue() { return value; }
        SingleNode* getNextNode() { return nextNode; }
        SingleNode* getPreviousNode(){return previousNode;}
        void setNextNode(SingleNode *newNode) { nextNode = newNode; }
        void setPreviousNode(SingleNode *newNode){ previousNode=newNode; }
        ~SingleNode(){}

    private:
    int value;
	SingleNode *nextNode;
	SingleNode *previousNode;

};

#endif // SINGLENODE_H
