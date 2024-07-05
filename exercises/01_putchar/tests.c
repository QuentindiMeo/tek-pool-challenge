/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putchar(char c);
void assert_match_stdout(char const *expected);

Test(my_putchar, test_one, .init = cr_redirect_stdout)
{
    my_putchar('a');
    assert_match_stdout("a");
}

Test(my_putchar, test_two, .init = cr_redirect_stdout)
{
    my_putchar('b');
    my_putchar('c');
    assert_match_stdout("bc");
}

Test(my_putchar, test_hello_world, .init = cr_redirect_stdout)
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
    assert_match_stdout("Hello World!");
}

Test(my_putchar, test_empty, .init = cr_redirect_stdout)
{
    my_putchar('\0');
    assert_match_stdout("");
}

Test(my_putchar, test_metacharacters, .init = cr_redirect_stdout)
{
    my_putchar('\t');
    my_putchar('\n');
    assert_match_stdout("\t\n");
}

Test(my_putchar, test_return_value, .init = cr_redirect_stdout)
{
    int ret = my_putchar('a');
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}

Test(my_putchar, test_return_value_with_null, .init = cr_redirect_stdout)
{
    int ret = my_putchar('\0');
    cr_assert_eq(ret, 0, "Expected return value of 0, got %d", ret);
}

Test(my_putchar, test_return_value_with_metacharacter, .init = cr_redirect_stdout)
{
    int ret = my_putchar('\t');
    cr_assert_eq(ret, 1, "Expected return value of 1, got %d", ret);
}
