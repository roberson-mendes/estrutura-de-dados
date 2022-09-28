#include <cstddef> //to use NULL type
#include "../../../resources/test_base.h"
#include "../../../../main/week_2/class_2/dispersed_stack/dispersed_stack.cpp"

SCENARIO("Initializing a DispersedStack structure") {
    GIVEN("an attempt to initialize a DispersedStack") {
        DispersedStack stack;
        
        WHEN("verify if stack is empty") {
            THEN("should return true") {
                CHECK(stack.isEmpty() == true);
            }
        }
    }
}

SCENARIO("Stack is empty") {
    GIVEN("a empty stack") {        
        DispersedStack stack;

        WHEN("it is tried to allocate a new item") {
            //alocates new item
            ItemType newItem = 'a';
            stack.push(newItem);

            THEN("it should allocate the new item successfully") {
                CHECK(stack.isEmpty() == false);
            }   
        }

        WHEN("it tries to pop out an item") {
            THEN("it does nothing with the stack") {
            }

            AND_THEN("it should throw an exception") {
            }
        }

        WHEN("is called isEmpty() method")
        {
            THEN("it should return true")
            {
            }
        }
    }
}

SCENARIO("Stack has at least 1 item") {
    GIVEN("a stack with 1 item") {        
        WHEN("it is tried to allocate a new item") {
            THEN("it should allocate this new item successfully") {
            }

            AND_THEN("this new item should be allocated at the top of the stack") {
            }
        }
    
        AND_WHEN("it is tried to pop an item") {
            THEN("it should return the popped item from the stack") {
            }

            AND_THEN("should put a null in place of the popped value") {
            }

            AND_WHEN("it is tried to push a new item") {

                THEN("it should put this item in the bottom of the stack") {
                }
            }
        }
    }

    GIVEN("a stack with 2 items") {
        WHEN("it is tried to allocate a new item") {
            THEN("it should allocate this new item") {
            }

            AND_THEN("should allocate the new item at the top") {
            }
        }
        
        AND_WHEN("it is tried to pop an item") {
            
            THEN("it should return the popped item from the stack") {
            }

            AND_THEN("the item of the top should be the right before") {
            }
        }
    }
}

SCENARIO("Stack is fullfilled") {
    GIVEN("fullfilled stack") {
        WHEN("isFull is called") {
            THEN("it should be true") {
            }
        }

        WHEN("it is tried to allocate a new item") {
            THEN("it shouldn't allocate the new item") {
            }
        }
    }
}
