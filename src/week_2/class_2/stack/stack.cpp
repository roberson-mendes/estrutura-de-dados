#include "stack.h"

Stack::Stack(ItemType *structure) {
    this->structure = structure;
}

Stack::~Stack() {
    delete [] this->structure;
}

void Stack::push(ItemType item) {
    this->structure[0] = item;
}