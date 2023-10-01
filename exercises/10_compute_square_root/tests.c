/*
** EPITECH CHALLENGE, 2023
** compute_square_root tests
*/

#include <criterion/criterion.h>

unsigned int my_compute_square_root(unsigned int nb);

Test(compute_square_root, test_0, .timeout = 2)
{
    int result = my_compute_square_root(0);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_1, .timeout = 2)
{
    int result = my_compute_square_root(1);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(compute_square_root, test_2, .timeout = 2)
{
    int result = my_compute_square_root(2);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_3, .timeout = 2)
{
    int result = my_compute_square_root(3);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_4, .timeout = 2)
{
    int result = my_compute_square_root(4);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(compute_square_root, test_5, .timeout = 2)
{
    int result = my_compute_square_root(5);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_6, .timeout = 2)
{
    int result = my_compute_square_root(6);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_7, .timeout = 2)
{
    int result = my_compute_square_root(7);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_8, .timeout = 2)
{
    int result = my_compute_square_root(8);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_9, .timeout = 2)
{
    int result = my_compute_square_root(9);
    cr_assert_eq(result, 3, "Expected 3, got %d", result);
}

Test(compute_square_root, test_81, .timeout = 2)
{
    int result = my_compute_square_root(81);
    cr_assert_eq(result, 9, "Expected 9, got %d", result);
}

Test(compute_square_root, test_82, .timeout = 2)
{
    int result = my_compute_square_root(82);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(compute_square_root, test_9801, .timeout = 2)
{
    int result = my_compute_square_root(9801);
    cr_assert_eq(result, 99, "Expected 99, got %d", result);
}

Test(compute_square_root, test_big, .timeout = 2)
{
    int result = my_compute_square_root(1909924);
    cr_assert_eq(result, 1382, "Expected 1382, got %d", result);
}
