#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
 //Rasmi Lamichhane //csci2270-200 // hw3 //Brittany Ann Kos//reference lab6 note//hw 2//lab8//rohndas book

class ArrayStack
{
   public:
        ArrayStack();
        ~ArrayStack();
        bool PrintAndTraverse();
        bool Push_Stack(int a);
        bool pop_Stack();
        bool isStackEmpty();
        bool isStackFull();

    private:
        int bottom;
        int top;
        int *items;
        int max_stack;

};

#endif // ARRAYSTACK_H
