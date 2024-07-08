/*
** EPITECH CHALLENGE, 2023
** my_put_nbr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_nbr(int nb);
void assert_match_stdout(char const *expected);

Test(my_put_nbr, should_print_42, .init = cr_redirect_stdout)
{
    my_put_nbr(42);
    assert_match_stdout("42");
}

Test(my_put_nbr, should_print_0, .init = cr_redirect_stdout)
{
    my_put_nbr(0);
    assert_match_stdout("0");
}

Test(my_put_nbr, should_print_1, .init = cr_redirect_stdout)
{
    my_put_nbr(1);
    assert_match_stdout("1");
}

Test(my_put_nbr, should_print_10, .init = cr_redirect_stdout)
{
    my_put_nbr(10);
    assert_match_stdout("10");
}

Test(my_put_nbr, should_print_100, .init = cr_redirect_stdout)
{
    my_put_nbr(100);
    assert_match_stdout("100");
}

Test(my_put_nbr, should_print_2147483647, .init = cr_redirect_stdout)
{
    my_put_nbr(2147483647);
    assert_match_stdout("2147483647");
}

Test(my_put_nbr, should_print_2147483648, .init = cr_redirect_stdout)
{
    my_put_nbr(-2147483648);
    assert_match_stdout("-2147483648");
}

Test(my_put_nbr, should_print_2147483649, .init = cr_redirect_stdout)
{
    my_put_nbr(-1);
    assert_match_stdout("-1");
}

Test(my_put_nbr, return_value, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(42);
    cr_assert_eq(ret, 2, "Expected return value of 2, got %d", ret);
}

Test(my_put_nbr, return_value_with_null, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(0);
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_put_nbr, return_value_with_1, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(1);
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_put_nbr, return_value_with_10, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(10);
    cr_assert_eq(ret, 2, "Expected return value of 2, got %d", ret);
}

Test(my_put_nbr, return_value_with_100, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(100);
    cr_assert_eq(ret, 3, "Expected return value of 3, got %d", ret);
}

Test(my_put_nbr, return_value_with_2147483647, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(2147483647);
    cr_assert_eq(ret, 10, "Expected return value of 10, got %d", ret);
}

Test(my_put_nbr, return_value_with_2147483648, .init = cr_redirect_stdout)
{
    int ret = my_put_nbr(-2147483648);
    cr_assert_eq(ret, 11, "Expected return value of 11, got %d", ret);
}
