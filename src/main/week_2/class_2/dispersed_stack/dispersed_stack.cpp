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

ItemType DispersedStack::pop() {
    if(this->isEmpty()) {
        throw std::runtime_error("Stack is empty, so you can't pop a value!");
    }
    return 'a';
}
