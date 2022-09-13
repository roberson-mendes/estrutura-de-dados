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
        WHEN("it is tried to allocate a new item") {
            THEN("it should allocate this new item successfully") {
                
            }

            AND_THEN("this new item should be allocated at the top") {

            }
        }
    
        AND_WHEN("it is tried to pop an element") {
            THEN("it should pop this element from the stack") {

            }

            AND_THEN("should keep the penultimate element in the same position") {

            }

            AND_THEN("should put a null as the value of the previous last position") {

            }
        }
    }

    GIVEN("a stack with 2 elements") {
        WHEN("it is tried to allocate a new item") {
            THEN("it should allocate this new item") {

            }

            AND_THEN("this new item should be allocated at the top") {

            }
        }
        
        AND_WHEN("it is tried to pop an element") {
            THEN("it should pop this element from the stack") {

            }

            AND_THEN("the element of the top should be the previous one") {

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
