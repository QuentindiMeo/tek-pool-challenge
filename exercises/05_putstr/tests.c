/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putstr(char const *str);

Test(my_putstr, test_hello_world, .init = cr_redirect_stdout)
{
    my_putstr("Hello World!");
    cr_assert_stdout_eq_str("Hello World!", "Expected \"Hello World!\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_empty, .init = cr_redirect_stdout)
{
    my_putstr("");
    cr_assert_stdout_eq_str("", "Expected \"\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_null, .init = cr_redirect_stdout)
{
    my_putstr(NULL);
    cr_assert_stdout_eq_str("", "Expected \"\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_very_long, .init = cr_redirect_stdout)
{
    my_putstr("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.");
    cr_assert_stdout_eq_str("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.", "Expected \"Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_with_metacharacters, .init = cr_redirect_stdout)
{
    my_putstr("Hello\tWorld!\n");
    cr_assert_stdout_eq_str("Hello\tWorld!\n", "Expected \"Hello\tWorld!\n\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_with_nulls, .init = cr_redirect_stdout)
{
    my_putstr("Hello\0World!\n");
    cr_assert_stdout_eq_str("Hello", "Expected \"Hello\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putstr, test_with_nulls_and_metacharacters, .init = cr_redirect_stdout)
{
    my_putstr("Hello\0\tWorld!\n");
    cr_assert_stdout_eq_str("Hello", "Expected \"Hello\", got \"%s\"", cr_redirect_stdout);
}
