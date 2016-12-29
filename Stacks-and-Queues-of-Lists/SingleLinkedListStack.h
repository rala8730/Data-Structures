#ifndef SINGLELINKEDLISTSTACK_H
#define SINGLELINKEDLISTSTACK_H
#include "SingleNode.h"
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book


class SingleLinkedListStack
{
    public:
        SingleLinkedListStack();//constructor
        bool isEmpty();//if linklist is empty
        void Print_Traverse();//printing the stack
        void push_Stack(int a);//adding the element in stack
        int pop_stack();//deleting the



        ~SingleLinkedListStack();
    private:
        int max_stack;//max size of link list
        SingleNode *head;
        SingleNode *tail;
};

#endif // SINGLELINKEDLISTSTACK_H
