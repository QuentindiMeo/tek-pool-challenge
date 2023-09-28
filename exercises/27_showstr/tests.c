/*
** EPITECH CHALLENGE, 2023
** showstr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

unsigned int my_showstr(char const *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(showstr, ponies, .init = redirect_all_stdout)
{
    int ret = my_showstr("I like \n ponies!");

    cr_assert_stdout_eq_str("I like \0a ponies!", "Expected %s to be %s", cr_redirect_stdout, "I like \0a ponies!");
}

Test(showstr, ponies2, .init = redirect_all_stdout)
{
    int ret = my_showstr("I like \n ponies!\n");

    cr_assert_stdout_eq_str("I like \0a ponies!\0a", "Expected %s to be %s", cr_redirect_stdout, "I like \0a ponies!\0a");
}

Test(showstr, no_meta, .init = redirect_all_stdout)
{
    int ret = my_showstr("I like ponies!");

    cr_assert_stdout_eq_str("I like ponies!", "Expected %s to be %s", cr_redirect_stdout, "I like ponies!");
}

Test(showstr, full_meta, .init = redirect_all_stdout)
{
    int ret = my_showstr("\a\b\t!\n\v\f\r!");

    cr_assert_stdout_eq_str("\07\08\09!\0a\0b\0c\0d!", "Expected %s to be %s", cr_redirect_stdout, "\07\08\09!\0a\0b\0c\0d!");
}

Test(showstr, empty, .init = redirect_all_stdout)
{
    int ret = my_showstr("");

    cr_assert_stdout_eq_str("", "Expected %s to be %s", cr_redirect_stdout, "");
}

Test(showstr, null, .init = redirect_all_stdout)
{
    int ret = my_showstr(NULL);

    cr_assert_stdout_eq_str("", "Expected %s to be %s", cr_redirect_stdout, "");
}

Test(showstr, return_value1, .init = redirect_all_stdout)
{
    int ret = my_showstr("I like ponies!");

    cr_assert_eq(ret, 14, "Expected %d to be %d", ret, 14);
}

Test(showstr, return_value2, .init = redirect_all_stdout)
{
    int ret = my_showstr("I like \n ponies!");

    cr_assert_eq(ret, 16, "Expected %d to be %d", ret, 16);
}

Test(showstr, return_value3, .init = redirect_all_stdout)
{
    int ret = my_showstr("\a\b\t!\n\v\f\r!");

    cr_assert_eq(ret, 14, "Expected %d to be %d", ret, 14);
}

Test(showstr, return_value_empty, .init = redirect_all_stdout)
{
    int ret = my_showstr("");

    cr_assert_eq(ret, 0, "Expected %d to be %d", ret, 0);
}

Test(showstr, return_value_null, .init = redirect_all_stdout)
{
    int ret = my_showstr(NULL);

    cr_assert_eq(ret, 0, "Expected %d to be %d", ret, 0);
}