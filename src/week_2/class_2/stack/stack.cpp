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
    this->structure[0] = item;
}

ItemType Stack::pop() {
    throw std::runtime_error("Stack is empty, so you can't pop a value!");
}