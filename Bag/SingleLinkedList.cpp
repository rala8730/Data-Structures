#include "SingleLinkedList.h" //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6 note
#include <iostream>
#include "SingleNode.h"
using namespace std;
SingleLinkedList::SingleLinkedList()
{
    head = new SingleNode();
	tail = new SingleNode();
	totalNodes = 0;
    //ctor
}
void SingleLinkedList::traverseAndPrint()
{
   //cout<<"Single Linked List ";

    SingleNode *temp;
    temp= head->getNextNode();
    while(temp!=NULL)
    {
        cout<<temp->getValue()<<endl;
        temp=temp->getNextNode();
    }
        cout<<"In your pocket of Potion"<<endl;
}
void SingleLinkedList::addNode(string data)
{
   SingleNode *n= new SingleNode(data);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(n);
        tail->setNextNode(n);
        cout<<"'"<<data<<"'"<<"was added to your pocket of Potion"<<endl;
        //tail->getNextNode()->setNextNode(n);
        //return false;
    }
    else
    {
    tail->getNextNode()->setNextNode(n);
    tail->setNextNode(n);
    cout<<"'"<<data<<"'"<<"was added to your pocket of Potion"<<endl;
    }

}
bool SingleLinkedList::deleteNode(string data)
{

    SingleNode *curr;
    curr=head->getNextNode();
    SingleNode *prev=NULL;
    while(curr!=NULL)
    {
        if(curr->getValue()==data)//checking the value not setting it
        {
            if(prev==NULL)
            //setting the heads next next node the current next node
                head->setNextNode(curr->getNextNode());
            else
                prev->setNextNode(curr->getNextNode());
            delete curr;
            cout<<"'"<<data<<"'"<<"was removed from your pocket of Potion"<<endl;
            return true;
        }
        prev=curr;
        curr=curr->getNextNode();
    }
    cout<<"Sorry there is no"<<"'"<<data<<"'"<<"in the pocket of Potion"<<endl;
    return false;

}

SingleLinkedList::~SingleLinkedList()
{
    SingleNode* current = head;
	while( current != 0 )
	{
		SingleNode* next = current->getNextNode();
		delete current;
		current = next;
	}
	head = 0;
    //dtor
}
