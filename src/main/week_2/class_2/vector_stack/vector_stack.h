#include "../../item_type.h"
#include "../stack.h"

const int MAX_ITEMS = 100;

class VectorStack: public Stack {
    public:
        VectorStack(ItemType *structure = new ItemType[MAX_ITEMS], int structureSize = MAX_ITEMS);
        ~VectorStack();

        virtual bool isEmpty() const;
        virtual bool isFull() const;
        virtual void push(ItemType);
        virtual ItemType pop();
    private:
        int length;
        int mStructureSize;
        ItemType* structure;
};
