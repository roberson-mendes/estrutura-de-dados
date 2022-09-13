#include <stdexcept>
#include "../../../../resources/test_base.h"
#include "../../../../../src/week_2/class_2/stack/stack.cpp"
#include <stdexcept>
#include <cstddef>

bool isStackEmpty(ItemType *structure) {
    bool isEmpty = true;
    char empty = (char) NULL;

    for (int i = 0; i < 10; i++) {
        if (structure[i] != empty)
            isEmpty = false;
    }

    return isEmpty;
}

SCENARIO("Initializing a Stack structure") {
    GIVEN("an attempt to initialize a Stack") {
        int structureSize = 10;
        ItemType structure[structureSize];
        Stack stack(structure, structureSize);

        WHEN("the stack was initialized") {
            THEN("should initialize an empty stack") {
                CHECK(isStackEmpty(structure) == true);
            }
        }
    }
}

SCENARIO("Stack is empty") {
    GIVEN("a empty stack") {
        ItemType *structure = new ItemType[100];
        Stack stack(structure);
        
        WHEN("it is tried to allocate a new element") {
            ItemType item = 'a';
            stack.push(item);

            THEN("it should allocate the new element successfully") {
                CHECK(structure[0] == item);
            }   
        }

        WHEN("it tries to pop out an element") {
            THEN("it does nothing with the stack") {
                try {
                    stack.pop();
                }
                catch(std::exception e) {
                    CHECK(structure[0] == (char) NULL);
                }
            }

            AND_THEN("it should throw an exception") {
                CHECK_THROWS_AS(stack.pop(), std::exception);
            }
        }
    }
}

SCENARIO("Stack has at least 1 element") {
    GIVEN("a stack with 1 element") {
        int structureSize = 10;
        ItemType structure[structureSize];
        Stack stack(structure, structureSize);
        stack.push('a');
        
        WHEN("it is tried to allocate a new item") {
            THEN("it should allocate this new item successfully") {
                stack.push('b');
                CHECK(structure[1] == 'b');
            }

            AND_THEN("this new item should be allocated at the top of the stack") {
                stack.push('b');
                CHECK(structure[0] == 'a');
                CHECK(structure[1] == 'b');
                CHECK(structure[2] == (ItemType) NULL);
            }
        }
    
        AND_WHEN("it is tried to pop an item") {
            ItemType poppedItem = stack.pop();
            
            THEN("it should return the popped item from the stack") {
                CHECK(poppedItem == 'a');
            }

            AND_THEN("should put a null in place of the popped value") {
                CHECK(structure[0] == (char) NULL);
            }

            AND_WHEN("it is tried to push a new item") {
                ItemType newItem = 'c';
                stack.push(newItem);

                THEN("it should put this item in the bottom of the stack") {
                    int bottom = 0;

                    CHECK(structure[bottom] == newItem);
                }
            }
        }
    }

    GIVEN("a stack with 2 elements") {
        int structureSize = 10;

        ItemType structure[structureSize];

        Stack stack(structure, structureSize);

        ItemType firstItem = 'a';
        ItemType secondItem = 'b';

        stack.push(firstItem);
        stack.push(secondItem);

        WHEN("it is tried to allocate a new item") {
            ItemType thirdItem = 'c';

            stack.push(thirdItem);
            
            THEN("it should allocate this new item") {
                CHECK(structure[2] == 'c');
            }

            AND_THEN("should allocate the new item at the top") {
                int top = 2;

                CHECK(structure[1] == 'b');
                CHECK(structure[top] == 'c');
                CHECK(structure[3] == (char) NULL);
            }
        }
        
        AND_WHEN("it is tried to pop an element") {
            int lastTopItem = secondItem;

            ItemType poppedItem = stack.pop();
            
            THEN("it should return the popped item from the stack") {
                CHECK(poppedItem == lastTopItem);
            }

            AND_THEN("the element of the top should be the right before") {
                CHECK(structure[0] == firstItem);
                CHECK(structure[1] == (char) NULL);
            }
        }
    }
}

SCENARIO("Stack is fullfilled") {
    GIVEN("Stack is fullfilled") {
        WHEN("someone tries to allocate a new item") {
            THEN("it shouldn't allocate a new item") {

            }

            AND_THEN("it should throw an error") {

            }
        }
    }
}
