#ifndef DOUBLELINKEDLISTQUEUE_H
#define DOUBLELINKEDLISTQUEUE_H
#include "DoubleNode.h"
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book

class DoubleLinkedListQueue
{
    public:
        DoubleLinkedListQueue();//constructor
        void traverseAndPrintForward();
        void traverseAndPrintBackward();
        void push_Queue(int a);//adding the element in stack
        int pop_Queue();//deleting the



        ~DoubleLinkedListQueue();
    private:
        int max_stack;//max size of link list
        int *newnode;//node
        DoubleNode *head;//head//top
        DoubleNode *tail;//tail//botom
};

#endif // DOUBLELINKEDLISTQUEUE_H
