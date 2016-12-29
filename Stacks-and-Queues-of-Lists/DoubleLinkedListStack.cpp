#include "DoubleLinkedListStack.h"
#include "DoubleNode.h"
#include <iostream>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book
using namespace std;

DoubleLinkedListStack::DoubleLinkedListStack()
{
    //ctor
    head = new DoubleNode();
	tail = new DoubleNode();
//	totalNodes = 0;
}

DoubleLinkedListStack::~DoubleLinkedListStack()
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

void DoubleLinkedListStack::traverseAndPrintForward()
{
    DoubleNode *temporary=head->getNextNode();
    while(temporary!=NULL)
    {
        cout<<temporary->getValue()<<endl;
        temporary=temporary->getNextNode();
    }
    cout<<"In your DoubleLinkListStack"<<endl;
}
void DoubleLinkedListStack::traverseAndPrintBackward()
{
    DoubleNode *temporary=tail;
    while (temporary!=NULL)
    {
        //getting a value so its a function
        cout<<temporary->getValue()<<" ";
        temporary=temporary->getPreviousNode();
    }
    cout<<endl;
}
void DoubleLinkedListStack::push_Stack(int a)//adding the element in stack
{
    DoubleNode *newnode= new DoubleNode(a);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(newnode);
        tail->setPreviousNode(newnode);
    }
    else
    {
        newnode->setNextNode(head->getNextNode());
        head->getNextNode()->setPreviousNode(newnode);
        head->setNextNode(newnode);
        cout<<"'"<<a<<"'"<<"was added to Doublelinklist Stack"<<endl;
    }

//need to do ir here
}

int DoubleLinkedListStack::pop_stack()//deleting the
{
    //need to do it here
    DoubleNode *temp;
    if(head->getNextNode()==NULL)//empty
    {
        cout<<"theres noting in this DOubleLink LISt Stack"<<endl;
    }
    else if(head->getNextNode()==tail->getPreviousNode())//onlt one item
    {
        delete head->getNextNode();
        head->setNextNode(NULL);
        tail->setPreviousNode(NULL);
    }
    else//multuple
    {
    temp=head->getNextNode();
    head->setNextNode(temp->getNextNode());
    //temp->setNextNode(head);
    head->getNextNode()->setPreviousNode(NULL);
    temp->setNextNode(NULL);
    delete temp;
    //head->setNextNode(head->getNextNode()->getNextNode())


    }
}
