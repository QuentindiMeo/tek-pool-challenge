/*
** EPITECH CHALLENGE, 2023
** compute_power_rec tests
*/

#include <criterion/criterion.h>

unsigned int my_compute_power_rec(unsigned int nb, unsigned int p);

Test(compute_power_rec, test_2_0, .timeout = 2)
{
    int result = my_compute_power_rec(2, 0);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(compute_power_rec, test_2_1, .timeout = 2)
{
    int result = my_compute_power_rec(2, 1);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(compute_power_rec, test_2_2, .timeout = 2)
{
    int result = my_compute_power_rec(2, 2);
    cr_assert_eq(result, 4, "Expected 4, got %d", result);
}

Test(compute_power_rec, test_2_3, .timeout = 2)
{
    int result = my_compute_power_rec(2, 3);
    cr_assert_eq(result, 8, "Expected 8, got %d", result);
}

Test(compute_power_rec, test_2_4, .timeout = 2)
{
    int result = my_compute_power_rec(2, 4);
    cr_assert_eq(result, 16, "Expected 16, got %d", result);
}

Test(compute_power_rec, test_3_3, .timeout = 2)
{
    int result = my_compute_power_rec(3, 3);
    cr_assert_eq(result, 27, "Expected 27, got %d", result);
}

Test(compute_power_rec, test_4_4, .timeout = 2)
{
    int result = my_compute_power_rec(4, 4);
    cr_assert_eq(result, 256, "Expected 256, got %d", result);
}

Test(compute_power_rec, test_5_5, .timeout = 2)
{
    int result = my_compute_power_rec(5, 5);
    cr_assert_eq(result, 3125, "Expected 3125, got %d", result);
}

Test(compute_power_rec, test_9_9, .timeout = 2)
{
    int result = my_compute_power_rec(9, 9);
    cr_assert_eq(result, 387420489, "Expected 387420489, got %d", result);
}

Test(compute_power_rec, test_120_0, .timeout = 2)
{
    int result = my_compute_power_rec(120, 0);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(compute_power_rec, test_120_1, .timeout = 2)
{
    int result = my_compute_power_rec(120, 1);
    cr_assert_eq(result, 120, "Expected 120, got %d", result);
}

Test(compute_power_rec, test_0_0, .timeout = 2)
{
    int result = my_compute_power_rec(0, 0);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}
