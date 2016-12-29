#include "ArrayQueue.h"
#include <iostream>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book
using namespace std;

ArrayQueue::ArrayQueue()
{
    max_Queue=10;
    head=0;//our size
    tail=-1;
    items=new int[max_Queue];
    int numberofelement=0;
    //ctor
}

ArrayQueue::~ArrayQueue()
{     //dtor
}
void ArrayQueue::PrintAndTraverse()
{
    cout<<head<<"head "<<tail <<"tail"<<endl;
    if(head>tail)
    {
        for(int i=head; i<numberofelements;i++)
        {
        cout<<items[i]<<endl;
        }
        for(int i=0;i<tail+1;i++)
        {
            cout<<items[i]<<endl;
        }

    }
    else//if head is less than tail
        for(int i=head;i<tail+1; i++)
        {
            cout<<items[i]<<endl;
        }
}
void ArrayQueue::Enqueue_Queue(int a)
{

     if (tail==max_Queue)
     {
     cout<<"Queue is Empty"<<endl;

    }
    else
    {
        items[tail+1]=a;
        tail++;
        numberofelements++;
        cout<<"'"<<a<<"'"<<"is added in your ArrayQueue"<<endl;
    }

   /* if(isFull_Queue())
    {
    cout<"ArrayQueue is full"<<endl;
    }
    else
    {
        head = (tail + 1) % (numberofelements);//noofelement is size of queue
        items[tail]=item;
    }*/
}
bool ArrayQueue::Dequeue_Queue()
{
    /*for(int i=0; i<tail;i++)
    {
        if (items[i]==a)
        {
        items[i]=items[tail];
        cout<<" 1 item is is removed from Array Queue"<<endl;
        tail--;
        return true;
        }*/
    /*int i;
    if(items[i]>0)
    {
    items[i]=items[head];
    }
    else if(items[i]==items[i-1])
    { if(head==tail)
            head==0;
        else
        head=head+1;
    }
    else
    cout<<"Queue Empty"<<endl;
    return items[i];
    */
     if(isEmpty_Queue())
        cout<<"underflow error"<<endl;
    else
    tail=tail-1;
}
bool ArrayQueue::isEmpty_Queue()
{
    if(numberofelements==0)
    return true;
    else
    return false;

}
bool ArrayQueue::isFull_Queue()
{
    if(max_Queue==numberofelements)
    {

    //cout<<"ArrayQueue is Full"<<endl;
    return true;
    }
    else
    return false;

}
