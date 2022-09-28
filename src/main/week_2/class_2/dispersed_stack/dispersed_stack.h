#include "../stack.h"
#include "node.h"

class DispersedStack: Stack {
    public:
        virtual bool isEmpty() const;
        virtual bool isFull() const;
        virtual void push(ItemType);
        virtual ItemType pop();
        DispersedStack();
        ~DispersedStack();
    private:
        Node* structure;
};
