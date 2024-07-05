/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putstr(char const *str);
void assert_match_stdout(char const *expected);

Test(my_putstr, test_hello_world, .init = cr_redirect_stdout)
{
    my_putstr("Hello World!");
    assert_match_stdout("Hello World!");
}

Test(my_putstr, test_empty, .init = cr_redirect_stdout)
{
    my_putstr("");
    assert_match_stdout("");
}

Test(my_putstr, test_null, .init = cr_redirect_stdout)
{
    my_putstr(NULL);
    assert_match_stdout("");
}

Test(my_putstr, test_very_long, .init = cr_redirect_stdout)
{
    my_putstr("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.");
    assert_match_stdout("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.");
}

Test(my_putstr, test_with_metacharacters, .init = cr_redirect_stdout)
{
    my_putstr("Hello\tWorld!\n");
    assert_match_stdout("Hello\tWorld!\n");
}

Test(my_putstr, test_with_nulls, .init = cr_redirect_stdout)
{
    my_putstr("Hello\0World!\n");
    assert_match_stdout("Hello");
}

Test(my_putstr, test_with_nulls_and_metacharacters, .init = cr_redirect_stdout)
{
    my_putstr("Hello\0\tWorld!\n");
    assert_match_stdout("Hello");
}
