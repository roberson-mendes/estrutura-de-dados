#include "../../item_type.h"

int MAX_ITEMS = 100;

class Queue {
    public:
        Queue(ItemType *structure = new ItemType[10], int structureSize = MAX_ITEMS);
        ~Queue();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;

        void enqueue(ItemType item);
        ItemType dequeue();
    
    private:
        int mFront;
        int mBack;
        int mStructureSize;
        ItemType* mStructure;
};
