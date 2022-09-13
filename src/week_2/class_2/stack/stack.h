#include "../../item_type.h"

const int MAX_ITEMS = 100;

class Stack {
    public:
        Stack(ItemType *structure = new ItemType[MAX_ITEMS], int structureSize = MAX_ITEMS);
        ~Stack();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;

        void push(ItemType);
        ItemType pop();
    private:
        int length;
        int mStructureSize;
        ItemType* structure;
};
