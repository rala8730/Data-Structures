#include "SingleLinkedListStack.h"
#include "SingleNode.h"
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book

SingleLinkedListStack::SingleLinkedListStack()
{    //ctor
    int max_stack=10;

    head = new SingleNode();
	tail = new SingleNode();

}

SingleLinkedListStack::~SingleLinkedListStack()//
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

void SingleLinkedListStack::Print_Traverse()
{
    SingleNode *temp;
    temp= head->getNextNode();
    while(temp!=NULL)
    {
        cout<<temp->getValue()<<endl;
        temp=temp->getNextNode();
    }
        cout<<"In single link list stack"<<endl;
        //only suppose to print from the top to bottom going down
     cout<<"In your SINGLELINKLISTSTACK"<<endl;

}
void SingleLinkedListStack::push_Stack(int a)
{
    SingleNode *temp;
    SingleNode *n= new SingleNode(a);
    if(head->getNextNode()==NULL)
    {
        head->setNextNode(n);
        tail->setNextNode(n);
        cout<<"'"<<a<<"'"<<"was added to your Singlelinklistsack"<<endl;
        //tail->getNextNode()->setNextNode(n);
        //return false;
    }
    else
    {
    temp=head->getNextNode();//setting head to emp
    head->setNextNode(n);
    n->setNextNode(temp);
    cout<<"'"<<a<<"'"<<"was added to your Single link list stack"<<endl;
    }

}
int SingleLinkedListStack::pop_stack()
{
     SingleNode *temp;
    //new temporary node
   if(head->getNextNode()==NULL)//no element in head
   {
     cout<<"stack is empty"<<endl;
   }//do nothing
   else if(head->getNextNode()==tail->getNextNode())//only one element in list
   {
       delete head->getNextNode();//delete head
       head->setNextNode(NULL);//set head and tail to null
       tail->setNextNode(NULL);
       cout<<"deleted the only one item remaning in the stack"<<endl;
    }
    else//multiple things in the list
    {
    temp=head->getNextNode();//temp is pointing where head is pointing
    head->setNextNode(temp->getNextNode());//head  is equal to temp next node???
    delete temp;//delete temp
    }
}
