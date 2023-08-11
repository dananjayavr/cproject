#include "dummy/dummy.h"
#include "unity.h"

void setUp(void)
{
}
void tearDown(void)
{
}

void test_dummy(void)
{
    TEST_ASSERT_EQUAL(42U, dummy_random());
}