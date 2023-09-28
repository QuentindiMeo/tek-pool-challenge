/*
** EPITECH CHALLENGE, 2023
** my_put_nbr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_nbr(int nb);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, should_print_42, .init = redirect_all_stdout)
{
    my_put_nbr(42);
    cr_assert_stdout_eq_str("42", "Expected \"42\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_0, .init = redirect_all_stdout)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0", "Expected \"0\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_1, .init = redirect_all_stdout)
{
    my_put_nbr(1);
    cr_assert_stdout_eq_str("1", "Expected \"1\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_10, .init = redirect_all_stdout)
{
    my_put_nbr(10);
    cr_assert_stdout_eq_str("10", "Expected \"10\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_100, .init = redirect_all_stdout)
{
    my_put_nbr(100);
    cr_assert_stdout_eq_str("100", "Expected \"100\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_2147483647, .init = redirect_all_stdout)
{
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647", "Expected \"2147483647\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_2147483648, .init = redirect_all_stdout)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648", "Expected \"-2147483648\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, should_print_2147483649, .init = redirect_all_stdout)
{
    my_put_nbr(-1);
    cr_assert_stdout_eq_str("-1", "Expected \"-1\", got \"%s\"", cr_redirect_stdout);
}

Test(my_put_nbr, return_value, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(42);
    cr_assert_eq(ret, 2, "Expected return value of 2, got %d", ret);
}

Test(my_put_nbr, return_value_with_null, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(0);
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_put_nbr, return_value_with_1, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(1);
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_put_nbr, return_value_with_10, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(10);
    cr_assert_eq(ret, 2, "Expected return value of 2, got %d", ret);
}

Test(my_put_nbr, return_value_with_100, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(100);
    cr_assert_eq(ret, 3, "Expected return value of 3, got %d", ret);
}

Test(my_put_nbr, return_value_with_2147483647, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(2147483647);
    cr_assert_eq(ret, 10, "Expected return value of 10, got %d", ret);
}

Test(my_put_nbr, return_value_with_2147483648, .init = redirect_all_stdout)
{
    int ret = my_put_nbr(-2147483648);
    cr_assert_eq(ret, 11, "Expected return value of 11, got %d", ret);
}