/*
** EPITECH CHALLENGE, 2023
** showstr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

unsigned int my_showstr(char const *str);
void assert_match_stdout(char const *expected);

Test(showstr, ponies, .init = cr_redirect_stdout)
{
    my_showstr("I like \n ponies!");
    assert_match_stdout("I like \0a ponies!");
}

Test(showstr, ponies2, .init = cr_redirect_stdout)
{
    my_showstr("I like \n ponies!\n");
    assert_match_stdout("I like \0a ponies!\0a");
}

Test(showstr, no_meta, .init = cr_redirect_stdout)
{
    my_showstr("I like ponies!");
    assert_match_stdout("I like ponies!");
}

Test(showstr, full_meta, .init = cr_redirect_stdout)
{
    my_showstr("\a\b\t!\n\v\f\r!");
    assert_match_stdout("\07\08\09!\0a\0b\0c\0d!");
}

Test(showstr, empty, .init = cr_redirect_stdout)
{
    my_showstr("");
    assert_match_stdout("");
}

Test(showstr, null, .init = cr_redirect_stdout)
{
    my_showstr(NULL);
    assert_match_stdout("");
}

Test(showstr, return_value1, .init = cr_redirect_stdout)
{
    int ret = my_showstr("I like ponies!");

    cr_assert_eq(ret, 14, "Expected %d to be %d", ret, 14);
}

Test(showstr, return_value2, .init = cr_redirect_stdout)
{
    int ret = my_showstr("I like \n ponies!");

    cr_assert_eq(ret, 16, "Expected %d to be %d", ret, 16);
}

Test(showstr, return_value3, .init = cr_redirect_stdout)
{
    int ret = my_showstr("\a\b\t!\n\v\f\r!");

    cr_assert_eq(ret, 14, "Expected %d to be %d", ret, 14);
}

Test(showstr, return_value_empty, .init = cr_redirect_stdout)
{
    int ret = my_showstr("");

    cr_assert_eq(ret, 0, "Expected %d to be %d", ret, 0);
}

Test(showstr, return_value_null, .init = cr_redirect_stdout)
{
    int ret = my_showstr(NULL);

    cr_assert_eq(ret, 0, "Expected %d to be %d", ret, 0);
}
