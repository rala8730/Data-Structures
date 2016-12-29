#ifndef SINGLENODE_H //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6 note
#define SINGLENODE_H
#include <string>
#include <iostream>
using namespace std;


class SingleNode
{
    public:

        SingleNode() { nextNode = NULL; }
        SingleNode(std::string s) { value = s; nextNode = NULL; }
        string getValue() { return value; }
        SingleNode* getNextNode() { return nextNode; }
        void setNextNode(SingleNode *newNode) { nextNode = newNode; }
        ~SingleNode(){}

    private:
    string value;
	SingleNode *nextNode;
};

#endif // SINGLENODE_H
