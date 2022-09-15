#include "queue.h"

Queue::Queue(ItemType *structure, int structureSize) {
    for (int i = 0; i < structureSize; i++) {
        structure[i] = (char) NULL;
    }

    this->mStructure = structure;
    this->mStructureSize = structureSize;
    this->mFront = 0;
    this->mBack = 0;
}

Queue::~Queue() {
    
}

bool Queue::isEmpty() const {
    bool isEmpty = true;
    char empty = (char) NULL;

    for (int i = 0; i < mStructureSize; i++) {
        if (this->mStructure[i] != empty)
            isEmpty = false;
    }

    return isEmpty;
}

bool Queue::isFull() const {
    bool isFull = true;
    char empty = (char) NULL;

    for (int i = 0; i < mStructureSize; i++) {
        if (this->mStructure[i] == empty)
            isFull = false;
    }

    return isFull;
}

void Queue::enqueue(ItemType item) {
    if(this->isFull())
        throw std::runtime_error("Queue is full, so can't allocate new value!");

    this->mStructure[this->mBack] = item;

    this->mBack++;

    if(this->mBack >= this->mStructureSize) {
        this->mBack = 0;
    }
}

ItemType Queue::dequeue() {
    if(!this->isEmpty()) {
        ItemType dequeuedItem = this->mStructure[this->mFront];
        
        this->mStructure[this->mFront] = (char) NULL;
        this->mFront++;

        if(this->mFront >= this->mStructureSize) {
            this->mFront = 0;
        }

        return dequeuedItem;
    }

    throw std::runtime_error("Stack is empty, so you can't pop a value!");
}
