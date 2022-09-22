#include "../../../resources/test_base.h"
#include "../../../../main/week_2/class_3/queue/queue.cpp"

SCENARIO("initializing a queue structure") {
    GIVEN("a initialized queue") {
        int structureSize = 2;
        ItemType structure[2];

        Queue queue(structure, structureSize);

        WHEN("checks wether it is empty") {    
            THEN("the response should be positive") {
                CHECK(queue.isEmpty() == true);
            }
        }
    }
}

SCENARIO("queue has at least one item") {
    GIVEN("a queue with 1 item") {
        int structureSize = 2;
        ItemType structure[structureSize];
        Queue queue(structure, structureSize);

        ItemType firstItem = 'a';
        queue.enqueue(firstItem);

        WHEN("one item is enqueued") {
            ItemType secondItem = 'b';
            queue.enqueue(secondItem);

            THEN("the second item is queued in the last position") {
                int lastPosition = 1;
                CHECK(structure[lastPosition] == secondItem);
            }

            THEN("the first item keep in it's position") {
                int frontPosition = 0;
                CHECK(structure[frontPosition] == firstItem);
            }
        }

        AND_WHEN("one item is dequeued") {
            ItemType dequeuedItem = queue.dequeue();

            THEN("should return the dequeued item") {
                CHECK(dequeuedItem == firstItem);
            }

            THEN("should make the queue empty") {
                CHECK(queue.isEmpty() == true);
            }
        }

        THEN("queue is not empty") {
            CHECK(queue.isEmpty() == false);
        }
    }
    
    GIVEN("queue with 3 items") {
        // init queue
        int structureSize = 3;
        ItemType structure[structureSize];
        Queue queue(structure, structureSize);

        // allocate items
        ItemType firstItem = 'a';
        ItemType secondItem = 'b';
        queue.enqueue(firstItem);
        queue.enqueue(secondItem);

        WHEN("one item is dequeued") {
            ItemType dequeuedItem = queue.dequeue();

            THEN("should dequeue item 'a'") {
                CHECK(dequeuedItem == firstItem);
            }

            THEN("should make the first position empty") {
                int dequeuedPosition = 0;
                CHECK(structure[dequeuedPosition] == (char) NULL);
            }

            THEN("should keep item 'b' in its position") {
                int bPosition = 1;
                CHECK(structure[bPosition] == 'b');
            }

            AND_WHEN("item 'c' is enqueued") {
                ItemType thirdItem = 'c';
                queue.enqueue(thirdItem);

                THEN("should position item 'c' after 'b'") {
                    queue.enqueue(thirdItem);
                    ItemType indexAfterB = 2;

                    CHECK( structure[indexAfterB] == 'c');
                }

                AND_WHEN("item 'd' is enqueued") {
                    ItemType forthItem = 'd';
                    queue.enqueue(forthItem);

                    THEN("should put item 'd' in index 0") {
                        CHECK_EQ(structure[0], forthItem);
                    }

                    AND_WHEN("one item is dequeued") {
                        dequeuedItem = queue.dequeue();

                        THEN("should dequeue the item 'b'") {
                            CHECK_EQ(dequeuedItem, 'b');
                        }

                        AND_WHEN("another item is dequeued") {
                            dequeuedItem = queue.dequeue();

                            THEN("should dequeue item 'c'") { 
                                CHECK_EQ(dequeuedItem, 'c');
                            }

                            AND_WHEN("the last item is dequeued") {
                                dequeuedItem = queue.dequeue();
                                
                                THEN("should dequeue item 'd") {
                                    CHECK_EQ(dequeuedItem, 'd');
                                }
                            }
                        }
                    }
                }


            }
        }
    }
}

SCENARIO("queue is empty") {
    GIVEN("an empty queue") {
        Queue queue;

        WHEN("dequeue it") {
            THEN("throw an exception") {
                CHECK_THROWS_AS(queue.dequeue(), std::exception);
            }
        }
    }
}

SCENARIO("queue is full") {
    GIVEN("a fullfilled queue") {
        int structureSize = 2;
        ItemType structure[structureSize];
        Queue queue = Queue(structure, structureSize);
        
        ItemType firstItem = 'a';
        ItemType secondItem = 'b';
        queue.enqueue(firstItem);
        queue.enqueue(secondItem);

        WHEN("try to enqueue an item") {
            ItemType thirdItem = 'c';
            ItemType *finalStructure = structure;

            THEN("should throw an error") {
                CHECK_THROWS_AS(queue.enqueue(thirdItem), std::exception);
            }
        }
    }
}
