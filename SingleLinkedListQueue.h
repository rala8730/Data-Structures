#ifndef SINGLELINKEDLISTQUEUE_H
#define SINGLELINKEDLISTQUEUE_H
#include "SingleNode.h"

class SingleLinkedListQueue
{
    public:
        SingleLinkedListQueue();
        ~SingleLinkedListQueue();
        bool PrintAndTraverse();
        void Enqueue_Queue(int a);
        bool Dequeue_Queue();

    private:
        SingleNode *head;//pointer
        SingleNode *tail;//pointer
        int top;//head
        int bottom;//tail
        int max_Queue;
};

#endif // SINGLELINKEDLISTQUEUE_H
