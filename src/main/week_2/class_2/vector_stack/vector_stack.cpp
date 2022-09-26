#include "vector_stack.h"
#include <iostream>

VectorStack::VectorStack(ItemType structure[], int structureSize) {
    this->length = 0;
    for (int i = 0; i < structureSize; i++) {
        structure[i] = (char) NULL;
    }

    this->structure = structure;
    this->mStructureSize = structureSize;
}

VectorStack::~VectorStack() {
}

void VectorStack::push(ItemType item) {
    if(!isFull()) {
        this->structure[this->length] = item;
        this->length++;
    }
}

ItemType VectorStack::pop() {
    if(length == 0)
        throw std::runtime_error("Stack is empty, so you can't pop a value!");
    else {
        int stackTop = length-1;

        ItemType poppedItem = this->structure[stackTop];
        
        this->structure[stackTop] = (char) NULL;

        this->length--;

        return poppedItem;
    }
}
        
bool VectorStack::isEmpty() const {
    return this->length == 0;
}

bool VectorStack::isFull() const {
    return this->length == this->mStructureSize;
}
