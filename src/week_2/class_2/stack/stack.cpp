#include "stack.h"
#include <iostream>

Stack::Stack(ItemType structure[], int structureSize) {
    this->length = 0;
    for (int i = 0; i < structureSize; i++) {
        structure[i] = (char) NULL;
    }

    this->structure = structure;
}

Stack::~Stack() {
}

void Stack::push(ItemType item) {
    this->structure[this->length] = item;
    this->length++;
}

ItemType Stack::pop() {
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