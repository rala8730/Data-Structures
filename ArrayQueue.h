#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H


class ArrayQueue
{
    public:
        ArrayQueue();
        ~ArrayQueue();
        void PrintAndTraverse();
        void Enqueue_Queue(int a);
        bool Dequeue_Queue();
        bool isEmpty_Queue();
        bool isFull_Queue();

    private:
        int head;//bottom
        int tail;//top
        int *items;
        int max_Queue;
        int numberofelements;
};

#endif // ARRAYQUEUE_H
