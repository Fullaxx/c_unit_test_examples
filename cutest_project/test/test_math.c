#include "CuTest.h"
#include "math.h"

void TestAdd(CuTest *tc) {
    CuAssertIntEquals(tc, 5, add(2, 3));
}

void TestSubtract(CuTest *tc) {
    CuAssertIntEquals(tc, 1, subtract(3, 2));
}

CuSuite* MathGetSuite(void) {
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, TestAdd);
    SUITE_ADD_TEST(suite, TestSubtract);
    return suite;
}
