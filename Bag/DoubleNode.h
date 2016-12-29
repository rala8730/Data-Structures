#ifndef DOUBLENODE_H //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//refrernce lab6 notes
#define DOUBLENODE_H
#include <string>
using namespace std;

class DoubleNode
{
    public:
        DoubleNode() { nextNode = previousNode = NULL; };
        DoubleNode(string s) { value = s; nextNode = previousNode = NULL; };
        string getValue() { return value; }
        DoubleNode* getNextNode() { return nextNode; }
        DoubleNode* getPreviousNode() { return previousNode; }
        void setNextNode(DoubleNode *newNode) { nextNode = newNode; }
        void setPreviousNode(DoubleNode *newNode) { previousNode = newNode; }
        ~DoubleNode(){}

    private:
        string value;
        DoubleNode *nextNode;
        DoubleNode *previousNode;
};

#endif // DOUBLENODE_H
