/*
** EPITECH CHALLENGE, 2023
** find_prime_sup tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

unsigned int my_find_prime_sup(unsigned int nb);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(find_prime_sup, test_0, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(0);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(find_prime_sup, test_1, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(1);
    cr_assert_eq(result, 2, "Expected 2, got %d", result);
}

Test(find_prime_sup, test_2, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(2);
    cr_assert_eq(result, 3, "Expected 3, got %d", result);
}

Test(find_prime_sup, test_3, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(3);
    cr_assert_eq(result, 3, "Expected 3, got %d", result);
}

Test(find_prime_sup, test_4, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(4);
    cr_assert_eq(result, 5, "Expected 5, got %d", result);
}

Test(find_prime_sup, test_5, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(5);
    cr_assert_eq(result, 5, "Expected 5, got %d", result);
}

Test(find_prime_sup, test_6, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(6);
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(find_prime_sup, test_7, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(7);
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(find_prime_sup, test_8, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(8);
    cr_assert_eq(result, 11, "Expected 11, got %d", result);
}

Test(find_prime_sup, test_99, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(99);
    cr_assert_eq(result, 101, "Expected 101, got %d", result);
}

Test(find_prime_sup, test_999, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(999);
    cr_assert_eq(result, 1009, "Expected 1009, got %d", result);
}

Test(find_prime_sup, test_max, .init = redirect_all_stdout)
{
    int result = my_find_prime_sup(4294967294);
    cr_assert_eq(result, 4294967295, "Expected 4294967295, got %d", result);
}