
#include "unity.h"
#include "math_utils.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_should_return_correct_sum(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(-1, add(-2, 1));
}

void test_subtract_should_return_correct_difference(void) {
    TEST_ASSERT_EQUAL(1, subtract(4, 3));
    TEST_ASSERT_EQUAL(-5, subtract(-2, 3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_return_correct_sum);
    RUN_TEST(test_subtract_should_return_correct_difference);
    return UNITY_END();
}
