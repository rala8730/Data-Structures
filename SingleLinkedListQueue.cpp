#include "SingleLinkedListQueue.h"
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book

SingleLinkedListQueue::SingleLinkedListQueue()
{
    //ctor
    head=new SingleNode();
    tail=new SingleNode();
//    totalNodes=0;
    //int max_Queue=10;

}

SingleLinkedListQueue::~SingleLinkedListQueue()
{
    //dtor
     SingleNode* current = head;
	while( current != 0 )
	{
		SingleNode* next = current->getNextNode();
		delete current;
		current = next;
	}
	head = 0;
}

bool SingleLinkedListQueue::PrintAndTraverse()
{   //only suppose to print from the top to bottom going down
    SingleNode *temp;
    temp=head->getNextNode();
    while(temp!=NULL)//when temp is not null
    {
    cout<<temp->getValue()<<endl;//printing the list??????????
        temp=temp->getNextNode();//temp
    }

    cout<<"In your Queue"<<endl;
}
void SingleLinkedListQueue::Enqueue_Queue(int a)
{//only adding the item from top to bottom
    SingleNode *n= new SingleNode(a);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(n);
        tail->setNextNode(n);
        cout<<"'"<<a<<"'"<<"was added to your Singlelinklistqueue"<<endl;
        //tail->getNextNode()->setNextNode(n);
        //return false;
    }
    else
    {
    tail->getNextNode()->setNextNode(n);
    tail->setNextNode(n);
    cout<<"'"<<a<<"'"<<"was added to your Single link list queue"<<endl;
    }
}//all good to go
bool SingleLinkedListQueue::Dequeue_Queue()
{//only delete the first top element
    SingleNode *temp;
    //new temporary node
   if(head->getNextNode()==NULL)//no element in head
   {
     cout<<"queue is empty"<<endl;
   }//do nothing
   else if(head->getNextNode()==tail->getNextNode())//only one element in list
   {
       delete head->getNextNode();//delete head
       head->setNextNode(NULL);//set head and tail to null
       tail->setNextNode(NULL);
       cout<<"deleted the only one item remaning in the queue"<<endl;
    }
    else//multiple things in the list
    temp=head->getNextNode();//temp is pointing where head is pointing
    head->setNextNode(temp->getNextNode());//head  is equal to temp next node???
    delete temp;//delete temp
}
