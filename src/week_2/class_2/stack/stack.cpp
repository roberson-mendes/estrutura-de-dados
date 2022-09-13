#include "stack.h"
#include <iostream>

Stack::Stack(ItemType structure[], int structureSize) {
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