/*
** EPITECH CHALLENGE, 2023
** is_prime tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

unsigned int my_is_prime(unsigned int nb);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(is_prime, test_0, .init = redirect_all_stdout)
{
    int result = my_is_prime(0);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_1, .init = redirect_all_stdout)
{
    int result = my_is_prime(1);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_2, .init = redirect_all_stdout)
{
    int result = my_is_prime(2);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_3, .init = redirect_all_stdout)
{
    int result = my_is_prime(3);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_4, .init = redirect_all_stdout)
{
    int result = my_is_prime(4);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_5, .init = redirect_all_stdout)
{
    int result = my_is_prime(5);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_21, .init = redirect_all_stdout)
{
    int result = my_is_prime(21);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_23, .init = redirect_all_stdout)
{
    int result = my_is_prime(23);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_25, .init = redirect_all_stdout)
{
    int result = my_is_prime(25);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_27, .init = redirect_all_stdout)
{
    int result = my_is_prime(27);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_29, .init = redirect_all_stdout)
{
    int result = my_is_prime(29);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_31, .init = redirect_all_stdout)
{
    int result = my_is_prime(31);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}

Test(is_prime, test_33, .init = redirect_all_stdout)
{
    int result = my_is_prime(33);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(is_prime, test_big_no, .init = redirect_all_stdout)
{
    int result = my_is_prime(2147483);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}


Test(is_prime, test_big_yes, .init = redirect_all_stdout)
{
    int result = my_is_prime(2147489);
    cr_assert_eq(result, 1, "Expected 1, got %d", result);
}
