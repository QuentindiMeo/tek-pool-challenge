/*
** EPITECH CHALLENGE, 2023
** isneg tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_isneg(int n);

Test(my_isneg, neg, .init = cr_redirect_stdout)
{
    my_isneg(-1);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, zero, .init = cr_redirect_stdout)
{
    my_isneg(0);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, pos, .init = cr_redirect_stdout)
{
    my_isneg(1);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_neg, .init = cr_redirect_stdout)
{
    my_isneg(-1000000000);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_pos, .init = cr_redirect_stdout)
{
    my_isneg(1000000000);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_neg2, .init = cr_redirect_stdout)
{
    my_isneg(-2147483648);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_pos2, .init = cr_redirect_stdout)
{
    my_isneg(2147483647);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}
