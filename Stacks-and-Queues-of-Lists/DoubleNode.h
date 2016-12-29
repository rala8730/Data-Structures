#ifndef DOUBLENODE_H
#define DOUBLENODE_H
#include <string>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book
using namespace std;

class DoubleNode
{
    public:
        DoubleNode() { nextNode = previousNode = NULL; };
        DoubleNode(int s) { value = s; nextNode = previousNode = NULL; };
        int getValue() { return value; }
        DoubleNode* getNextNode() { return nextNode; }
        DoubleNode* getPreviousNode() { return previousNode; }
        void setNextNode(DoubleNode *newNode) { nextNode = newNode; }
        void setPreviousNode(DoubleNode *newNode) { previousNode = newNode; }
        ~DoubleNode(){}

    private:
        int value;
        DoubleNode *nextNode;
        DoubleNode *previousNode;
};


#endif // DOUBLENODE_H
