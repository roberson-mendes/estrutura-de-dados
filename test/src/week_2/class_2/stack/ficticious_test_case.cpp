#include "../../../../resources/test_base.h"

SCENARIO("teste") {
    GIVEN("a fictitious test case") {
        WHEN("it must pass") {
            THEN("it passes") {
                CHECK(true == true);
            }
        }
    }

    GIVEN("a fictitious test case") {
        WHEN("it must fail") {
            THEN("it fails") {
                CHECK(true == false);
            }
        }
    }
}