#include "DoubleLinkedList.h" //Rasmi Lamichhane //csci2270-200 // hw2 //Brittany Ann Kos//reference lab6 note
using namespace std;

DoubleLinkedList::DoubleLinkedList()
{
    head = new DoubleNode();
	tail = new DoubleNode();
	totalNodes = 0;
    //ctor
}
void DoubleLinkedList::traverseAndPrintForward()
{
    //cout<<"Double Linked List: ";
    DoubleNode *temporary=head->getNextNode();
    while(temporary!=NULL)
    {
        cout<<temporary->getValue()<<endl;
        temporary=temporary->getNextNode();
    }
    cout<<"In your pocket of Good"<<endl;
}
void DoubleLinkedList::traverseAndPrintBackward()
{
   // cout<<"Double Linked List";
    DoubleNode *temporary=tail;
    while (temporary!=NULL)
    {
        //getting a value so its a function
        cout<<temporary->getValue()<<" ";
        temporary=temporary->getPreviousNode();
    }
    cout<<endl;

}
void DoubleLinkedList::addNode(string data)
{
    DoubleNode *newnode= new DoubleNode(data);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(newnode);
        tail->setPreviousNode(newnode);
    }
    else
        newnode->setPreviousNode(tail->getPreviousNode());
        tail->getPreviousNode()->setNextNode(newnode);
        tail->setPreviousNode(newnode);
        cout<<"'"<<data<<"'"<<"was added to your pocket of Good"<<endl;
}/*
bool DoubleLinkedList::deleteNode(string data)
{
    DoubleNode *Current=head->getNextNode();
    while(Current!=NULL)
    {
        if(Current->getValue()==data)
        {
            if(Current->getPreviousNode()==NULL)
            {
                head->setNextNode(Current->getNextNode());
                Current->setPreviousNode(NULL);
            }
            else if (Current->getNextNode()==NULL)
            {
                Current->getPreviousNode()->setNextNode(NULL);
                tail->setPreviousNode(Current->getPreviousNode());
            }
            else
            {   Current->getPreviousNode()->setNextNode(Current->getNextNode());
                Current->getNextNode()->setPreviousNode(Current->getPreviousNode());
            }

            delete Current;
            cout<<"'"<<data<<"'"<<"was removed from your pocket of Good"<<endl;
            return true;
        }
        break;
        cout<<"Sorry there is no"<<"'"<<data<<"'"<<"in the pocket of good"<<endl;
    }
    Current=Current->getNextNode();

	return false;
}*/
bool DoubleLinkedList::deleteNode(string data)
{
	DoubleNode* current = head->getNextNode();
	while(current != NULL) {
		if(current->getValue() == data)
		{
			// if first position
			if (current->getPreviousNode() == NULL)
                {//if current previous is numm then set head nex=null and tail previous equal to null
				head->setNextNode(NULL);
				tail->setPreviousNode(NULL);
			// in middle or last position
                }
			else if (current->getNextNode() == NULL)
                { //if//if current next is null current prev next is null, tail previous is current prev
                current->getPreviousNode()->setNextNode(NULL);
                tail->setPreviousNode(current->getPreviousNode());
                }
            else
                { //if not  current prev next is next , currentnextprevious is current prev
				current->getPreviousNode()->setNextNode(current->getNextNode());
				current->getNextNode()->setPreviousNode(current->getPreviousNode());
                }
			delete current;
			cout<<"'"<<data<<"'"<<"was removed from your pocket of Good"<<endl;
            return true;
		}
		current = current->getNextNode();
	}
	cout<<"Sorry there is no"<<"'"<<data<<"'"<<"in the pocket of Good"<<endl;
	return false;
}

DoubleLinkedList::~DoubleLinkedList()
{
    DoubleNode* current = head;
	while( current != 0 )
	{
		DoubleNode* next = current->getNextNode();
		delete current;
		current = next;
	}
	head = 0;
    //dtor
}
