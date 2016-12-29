#include "ArrayQueue.h"
#include "ArrayStack.h"
#include "SingleLinkedListQueue.h"
#include "SingleNode.h"
#include "DoubleLinkedListQueue.h"
#include "DoubleNode.h"
#include "SingleLinkedListStack.h"
#include "DoubleLinkedListStack.h"
#include <iostream>
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book


using namespace std;

int main()
{

    cout<<"Welcome to stack and queue what would you like to do?"<<endl;
    ArrayQueue Queue;
    ArrayStack Stack;
    SingleLinkedListQueue S_Queue;
    DoubleLinkedListQueue D_Queue;
    SingleLinkedListStack S_Stack;
    DoubleLinkedListStack D_Stack;
    int option;

    cout<<"1.Create stack"<<endl;
    cout<<"2.Create Queue"<<endl;
    cout<<"3.Exit program"<<endl;
    cin>>option;
    //option=0;
    while(option==1 ||option==2)
    {
        string a;
        string b;
        string c;
        string choose;
        cout<<"what would you like to do?"<<endl;
        cout<<"a) arrays"<<endl;
        cout<<"b) single linked lists"<<endl;
        cout<<"c) double linked lists"<<endl;
        cin>>choose;
        if(choose=="a"|| choose=="b"|| choose=="c")
        {
            int menu=0;

                while(option==1 && choose=="a")//array stack
                {   cout<<"arraysack"<<endl;
                    cout<<"1) PUSH (Enter integer for insertion into stack)"<<endl;
                    cout<<"2)POP (Display integer and delete it from stack)"<<endl;
                    cout<<"3)PRINT STACK (Display stack contents without deleting anything, last element first)"<<endl;
                    cout<<"4)Exit program"<<endl;
                    cout<<"What would you like to do"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        Stack.Push_Stack(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        Stack.pop_Stack();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        Stack.PrintAndTraverse();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;
                        //break;

                }

                while(option==2 && choose=="a")//queue array
                {   cout<<"queue Array"<<endl;
                    cout<<"1)ENQUEUE (Enter integer for insertion into queue)"<<endl;
                    cout<<"2)DEQUEUE (Display and delete integer from queue)"<<endl;
                    cout<<"3)PRINT QUEUE (Display queue contents without deleting anything, first element first)"<<endl;
                    cout<<"4)Exit program"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        Queue.Enqueue_Queue(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        Queue.Dequeue_Queue();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        Queue.PrintAndTraverse();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;
                        //break;
                }
                 while(option==1 && choose=="b")//stack linklist
                {   cout<<"stack SinglyLinklist"<<endl;
                    cout<<"1) PUSH (Enter integer for insertion into stack)"<<endl;
                    cout<<"2)POP (Display integer and delete it from stack)"<<endl;
                    cout<<"3)PRINT STACK (Display stack contents without deleting anything, last element first)"<<endl;
                    cout<<"4)Exit program"<<endl;
                    cout<<"What would you like to do"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        S_Stack.push_Stack(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        S_Stack.pop_stack();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        S_Stack.Print_Traverse();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;

                }

                while(option==2 && choose=="b")// Queue singlylinklist
                   {
                    cout<<"Queue SinglyLinklist"<<endl;
                    cout<<"1)ENQUEUE (Enter integer for insertion into queue)"<<endl;
                    cout<<"2)DEQUEUE (Display and delete integer from queue)"<<endl;
                    cout<<"3)PRINT QUEUE (Display queue contents without deleting anything, first element first)"<<endl;
                    cout<<"4)Exit program"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        S_Queue.Enqueue_Queue(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        S_Queue.Dequeue_Queue();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        S_Queue.PrintAndTraverse();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;

                }
                 while(option==1 && choose=="c")//Doubly stack
                {   cout<<"stack DoublyLinklist"<<endl;
                    cout<<"1) PUSH (Enter integer for insertion into stack)"<<endl;
                    cout<<"2)POP (Display integer and delete it from stack)"<<endl;
                    cout<<"3)PRINT STACK (Display stack contents without deleting anything, last element first)"<<endl;
                    cout<<"4)Exit program"<<endl;
                    cout<<"What would you like to do"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        D_Stack.push_Stack(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        D_Stack.pop_stack();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        D_Stack.traverseAndPrintForward();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;

                }

                while(option==2 && choose=="c")//boubly queue
                {   cout<<"Queue Doublylinklist"<<endl;
                    cout<<"1)ENQUEUE (Enter integer for insertion into queue)"<<endl;
                    cout<<"2)DEQUEUE (Display and delete integer from queue)"<<endl;
                    cout<<"3)PRINT QUEUE (Display queue contents without deleting anything, first element first)"<<endl;
                    cout<<"4)Exit program"<<endl;


                    int a;
                    cin>>menu;
                    if(menu==1)
                    {
                        cin>>a;
                        D_Queue.push_Queue(a);
                        //continue;
                    }
                    else if(menu==2)
                    {
                        D_Queue.pop_Queue();
                        //continue;
                    }
                    else if(menu==3)
                    {
                        D_Queue.traverseAndPrintForward();
                        //continue;
                    }
                    else if(menu==4)
                        option = 4;

                }



        }

    }



return 0;
}

