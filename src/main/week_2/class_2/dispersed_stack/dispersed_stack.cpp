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

void DispersedStack::push(ItemType) {}

ItemType DispersedStack::pop() { return 'a'; }
