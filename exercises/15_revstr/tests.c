/*
** EPITECH CHALLENGE, 2023
** revstr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_revstr(char *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(revstr, test_hello_world, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";

    my_revstr(str);
    cr_assert_str_eq(str, "!dlroW olleH", "Expected: !dlroW olleH\nGot: %s\n", str);
}

Test(revstr, test_empty, .init = redirect_all_stdout)
{
    char str[] = "";

    my_revstr(str);
    cr_assert_str_eq(str, "", "Expected: \nGot: %s\n", str);
}

Test(revstr, test_one_char, .init = redirect_all_stdout)
{
    char str[] = "a";

    my_revstr(str);
    cr_assert_str_eq(str, "a", "Expected: a\nGot: %s\n", str);
}

Test(revstr, test_two_chars, .init = redirect_all_stdout)
{
    char str[] = "ab";

    my_revstr(str);
    cr_assert_str_eq(str, "ba", "Expected: ba\nGot: %s\n", str);
}

Test(revstr, test_alphabet, .init = redirect_all_stdout)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";

    my_revstr(str);
    cr_assert_str_eq(str, "zyxwvutsrqponmlkjihgfedcba", "Expected: zyxwvutsrqponmlkjihgfedcba\nGot: %s\n", str);
}

Test(revstr, test_with_metacharacters, .init = redirect_all_stdout)
{
    char str[] = "Hello\tWorld!\n";

    my_revstr(str);
    cr_assert_str_eq(str, "\n!dlroW\tolleH", "Expected: \n!dlroW olleH\nGot: %s\n", str);
}

Test(revstr, test_with_numbers, .init = redirect_all_stdout)
{
    char str[] = "0123456789";

    my_revstr(str);
    cr_assert_str_eq(str, "9876543210", "Expected: 9876543210\nGot: %s\n", str);
}

Test(revstr, test_null, .init = redirect_all_stdout)
{
    char *str = NULL;

    my_revstr(str);
    cr_assert_null(str, "Expected: NULL\nGot: %p\n", str);
}

Test(revstr, test_return_value, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";

    cr_assert_eq(my_revstr(str), str, "Expected: %p\nGot: %p\n", str, my_revstr(str));
}
