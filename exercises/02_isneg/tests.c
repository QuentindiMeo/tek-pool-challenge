/*
** EPITECH CHALLENGE, 2023
** isneg tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_isneg(int n);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_isneg, neg, .init = redirect_all_stdout)
{
    my_isneg(-1);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, zero, .init = redirect_all_stdout)
{
    my_isneg(0);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, pos, .init = redirect_all_stdout)
{
    my_isneg(1);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_neg, .init = redirect_all_stdout)
{
    my_isneg(-1000000000);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_pos, .init = redirect_all_stdout)
{
    my_isneg(1000000000);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_neg2, .init = redirect_all_stdout)
{
    my_isneg(-2147483648);
    cr_assert_stdout_eq_str("N", "Expected \"N\", got \"%s\"", cr_redirect_stdout);
}

Test(my_isneg, big_pos2, .init = redirect_all_stdout)
{
    my_isneg(2147483647);
    cr_assert_stdout_eq_str("P", "Expected \"P\", got \"%s\"", cr_redirect_stdout);
}
