#ifndef DOUBLELINKEDLISTSTACK_H
#define DOUBLELINKEDLISTSTACK_H
#include "DoubleNode.h"
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book

class DoubleLinkedListStack
{
    public:
        DoubleLinkedListStack();//constructor
        bool isEmpty();//if linklist is empty
        //void Print_Traverse();//printing the stack
        void traverseAndPrintForward();
        void traverseAndPrintBackward();
        void push_Stack(int a);//adding the element in stack
        int pop_stack();//deleting the



        ~DoubleLinkedListStack();
    private:
        int max_stack;//max size of link list
        int *newnode;//node
        DoubleNode *head;//head//top
        DoubleNode *tail;//tail//botom
};

#endif // DOUBLELINKEDLISTSTACK_H
