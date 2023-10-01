/*
** EPITECH CHALLENGE, 2023
** find_prime_sup tests
*/

#include <criterion/criterion.h>

unsigned int my_find_prime_sup(unsigned int nb);

Test(find_prime_sup, test_0, .timeout = 2)
{
    int result = my_find_prime_sup(0);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(find_prime_sup, test_1, .timeout = 2)
{
    int result = my_find_prime_sup(1);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(find_prime_sup, test_2, .timeout = 2)
{
    int result = my_find_prime_sup(2);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(find_prime_sup, test_3, .timeout = 2)
{
    int result = my_find_prime_sup(3);
    cr_assert_eq(result, 3, "Expected 3, got %d", result);
}

Test(find_prime_sup, test_4, .timeout = 2)
{
    int result = my_find_prime_sup(4);
    cr_assert_eq(result, 5, "Expected 5, got %d", result);
}

Test(find_prime_sup, test_5, .timeout = 2)
{
    int result = my_find_prime_sup(5);
    cr_assert_eq(result, 5, "Expected 5, got %d", result);
}

Test(find_prime_sup, test_6, .timeout = 2)
{
    int result = my_find_prime_sup(6);
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(find_prime_sup, test_7, .timeout = 2)
{
    int result = my_find_prime_sup(7);
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(find_prime_sup, test_8, .timeout = 2)
{
    int result = my_find_prime_sup(8);
    cr_assert_eq(result, 11, "Expected 11, got %d", result);
}

Test(find_prime_sup, test_99, .timeout = 2)
{
    int result = my_find_prime_sup(99);
    cr_assert_eq(result, 101, "Expected 101, got %d", result);
}

Test(find_prime_sup, test_999, .timeout = 2)
{
    int result = my_find_prime_sup(999);
    cr_assert_eq(result, 1009, "Expected 1009, got %d", result);
}

Test(find_prime_sup, test_big, .timeout = 2)
{
    int result = my_find_prime_sup(42949674);
    cr_assert_eq(result, 42949679, "Expected 42949679, got %d", result);
}
