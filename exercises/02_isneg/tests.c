/*
** EPITECH CHALLENGE, 2023
** isneg tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_isneg(int n);
void assert_match_stdout(char const *expected);

Test(my_isneg, neg, .init = cr_redirect_stdout)
{
    my_isneg(-1);
    assert_match_stdout("N");
}

Test(my_isneg, zero, .init = cr_redirect_stdout)
{
    my_isneg(0);
    assert_match_stdout("P");
}

Test(my_isneg, pos, .init = cr_redirect_stdout)
{
    my_isneg(1);
    assert_match_stdout("P");
}

Test(my_isneg, big_neg, .init = cr_redirect_stdout)
{
    my_isneg(-1000000000);
    assert_match_stdout("N");
}

Test(my_isneg, big_pos, .init = cr_redirect_stdout)
{
    my_isneg(1000000000);
    assert_match_stdout("P");
}

Test(my_isneg, big_neg2, .init = cr_redirect_stdout)
{
    my_isneg(-2147483648);
    assert_match_stdout("N");
}

Test(my_isneg, big_pos2, .init = cr_redirect_stdout)
{
    my_isneg(2147483647);
    assert_match_stdout("P");
}
