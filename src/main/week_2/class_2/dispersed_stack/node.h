#include "../../item_type.h"

#ifndef NODE_H
#define NODE_H

struct Node {
        ItemType item;
        Node* next;
};

#endif
