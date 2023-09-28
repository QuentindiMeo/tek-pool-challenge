/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putstr(char const *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, test_one, .init = redirect_all_stdout)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a", "Expected \"a\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putchar, test_two, .init = redirect_all_stdout)
{
    my_putchar('b');
    my_putchar('c');
    cr_assert_stdout_eq_str("bc", "Expected \"bc\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putchar, test_hello_world, .init = redirect_all_stdout)
{
    my_putchar('H');
    my_putchar('e');
    my_putchar('l');
    my_putchar('l');
    my_putchar('o');
    my_putchar(' ');
    my_putchar('W');
    my_putchar('o');
    my_putchar('r');
    my_putchar('l');
    my_putchar('d');
    my_putchar('!');
    cr_assert_stdout_eq_str("Hello World!", "Expected \"Hello World!\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putchar, test_empty, .init = redirect_all_stdout)
{
    my_putchar('\0');
    cr_assert_stdout_eq_str("", "Expected \"\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putchar, test_metacharacters, .init = redirect_all_stdout)
{
    my_putchar('\t');
    my_putchar('\n');
    cr_assert_stdout_eq_str("\t\n", "Expected \"\\t\\n\", got \"%s\"", cr_redirect_stdout);
}

Test(my_putchar, test_return_value, .init = redirect_all_stdout)
{
    int ret = my_putchar('a');
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_putchar, test_return_value_with_null, .init = redirect_all_stdout)
{
    int ret = my_putchar('\0');
    cr_assert_eq(ret, 0, "Expected return value of 0, got %d", ret);
}

Test(my_putchar, test_return_value_with_metacharacter, .init = redirect_all_stdout)
{
    int ret = my_putchar('\t');
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}
