#include "ArrayStack.h"
#include<iostream>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book
using namespace std;

ArrayStack::ArrayStack()
{
    bottom=0;
    top=-1;
    int max_stack=10;
    items=new int[max_stack];
     //ctor
}

ArrayStack::~ArrayStack()
{
    //dtor
}
bool ArrayStack::PrintAndTraverse()
{
    for(int i=9; i>-1;i--)
    {
    cout<<items[i]<<endl;
    //cout<<"lol"<<endl;
    }
    cout<<"In your Array Stack"<<endl;
}
bool ArrayStack::Push_Stack(int a)//adding//good
{
   if(isStackFull())
    {
        int *new_Array=new int[2*max_stack]; // create new array of size max_stack * 2
        for (int i=0;i<max_stack;i++)
        {
        new_Array[i]=items[i];// copy over items from items array to new items array
        }
        delete []items;//delete items
        items=new_Array;//set items = new items array
        top++;//then increment it
        items[top]=a;//add a new element a in the top
        max_stack=2*max_stack;
        cout<<a<<" is addeed to your Array Stack"<<endl;
    }
    else
    {
        top++;//top increment==added to +1
        items[top]=a;//if array item is empty  add a element where top place=first element
        cout<<a<<" is addeed to your Array Stack"<<endl;

    }


}
bool ArrayStack::pop_Stack()//removing//good
{
    if(isStackEmpty())
        cout<<"underflow error"<<endl;
    else
    top=top-1;
    return items[top+1];
    cout<<"a item is deleted from your Arraystack"<<endl;
}
bool ArrayStack::isStackEmpty()
{
    if (top==-1)
        return true;
    else
        return false;
}
bool ArrayStack::isStackFull()
{
    if (top==max_stack-1)
        return true;
    else
        return false;
}
