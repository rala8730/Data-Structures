#include "DoubleLinkedListQueue.h"
#include <iostream>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book
using namespace std;

DoubleLinkedListQueue::DoubleLinkedListQueue()
{
    //ctor
    head = new DoubleNode();
	tail = new DoubleNode();

}

DoubleLinkedListQueue::~DoubleLinkedListQueue()
{
    //dtor
    DoubleNode* current = head;
	while( current != 0 )
	{
		DoubleNode* next = current->getNextNode();
		delete current;
		current = next;
	}
	head = 0;
}

//void Print_Traverse();//printing the stack
void DoubleLinkedListQueue::traverseAndPrintForward()
{
    //cout<<"Double Linked List: ";
    DoubleNode *temporary=head->getNextNode();
    while(temporary!=NULL)
    {
        cout<<temporary->getValue()<<endl;
        temporary=temporary->getNextNode();
    }
    cout<<"In Doublelinklist Queue"<<endl;
}
void DoubleLinkedListQueue::traverseAndPrintBackward()
{
     DoubleNode *temporary=tail;
    while (temporary!=NULL)
    {
        //getting a value so its a function
        cout<<temporary->getValue()<<endl;
        temporary=temporary->getPreviousNode();
    }

}
void DoubleLinkedListQueue::push_Queue(int a)//adding the element in Queue
{
  DoubleNode *newnode= new DoubleNode(a);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(newnode);
        tail->setPreviousNode(newnode);
    }
    else
        newnode->setPreviousNode(tail->getPreviousNode());
        tail->getPreviousNode()->setNextNode(newnode);
        tail->setPreviousNode(newnode);
        cout<<"'"<<a<<"'"<<"was added to Doublelinklist Queue"<<endl;

}
int DoubleLinkedListQueue::pop_Queue()//deleting the
{
    if(head->getNextNode()==NULL)//empty list
    {
    cout<<"DoubleLinklistQueue is empty"<<endl;
    }
    else if(head->getNextNode()==tail->getNextNode())
    {
        delete head->getNextNode();//deleting the node head pointing to
        head->setNextNode(NULL);//seting the head pointing to null
        tail->setPreviousNode(NULL);//setting the tail pointing to null
        cout<<"deleted one remaning item from the Doublylink list queue"<<endl;
    }
    else//if multiple list
    {
        head->setNextNode(head->getNextNode()->getNextNode());//head next node is equal o head nextnext node
        delete head->getPreviousNode();//delee the head new previous nodeus node isequal to null
        head->getNextNode()->setPreviousNode(NULL);//head's previo
    }
}
