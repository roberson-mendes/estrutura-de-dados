#include "dispersed_stack.h"
#include <cstddef>

DispersedStack::DispersedStack() {
    this->structure = NULL;
}

DispersedStack::~DispersedStack() {

}

bool DispersedStack::isEmpty() const { 
    return this->structure == NULL;
}

bool DispersedStack::isFull() const { return true; }

void DispersedStack::push(ItemType item) {
    if(this->isEmpty()) {        
        Node* node = new Node();
        node->item = item;
        node->next = NULL;
        this->structure = node;
    }
}

ItemType DispersedStack::pop() { return 'a'; }
