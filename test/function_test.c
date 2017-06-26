#include <ctest.h>
#include <../src/function.h>

CTEST(Test_1, input_0_0_0_7)
{
    int result = Variant(0, 0, 0, 7);

    int expected = 0;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2, input_0_0_7_7)
{
    int result = Variant(0, 0, 7, 7);

    int expected = 1;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_3, input_0_7_7_7)
{
    int result = Variant(0, 7, 7, 7);

    int expected = 2;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_4, input_7_7_7_m7)
{
    int result = Variant(7, 7, 7, -7);

    int expected = 1;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_5, input_7_7_7_0)
{
    int result = Variant(7, 7, 7, 0);

    int expected = 3;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_6, input_7_7_7_7)
{
    int result = Variant(7, 7, 7, 7);

    int expected = 4;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_7, input_1_1_1)
{
    int result = Discriminant(1, 1, 1);

    int expected = -3;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_8, input_1_8_1)
{
    int result = Discriminant(1, 8, 1);

    int expected = 60;

    ASSERT_EQUAL(expected, result);
}

CTEST(Test_9, input_1_2_1)
{
    int result = Discriminant(1, 2, 1);

    int expected = 0;

    ASSERT_EQUAL(expected, result);
}
