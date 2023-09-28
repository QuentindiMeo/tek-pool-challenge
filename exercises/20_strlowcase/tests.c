/*
** EPITECH CHALLENGE, 2023
** strlowcase tests
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(strlowcase, basic_usage)
{
    char str[] = "Hello World!";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello world!", "Expected: \"hello world!\"\nGot: %s\n", s);
}

Test(strlowcase, empty_string)
{
    char str[] = "";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "", "Expected: \"\"\nGot: %s\n", s);
}

Test(strlowcase, all_uppercase)
{
    char str[] = "HELLO WORLD!";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello world!", "Expected: \"hello world!\"\nGot: %s\n", s);
}

Test(strlowcase, all_lowercase)
{
    char str[] = "hello world!";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello world!", "Expected: \"hello world!\"\nGot: %s\n", s);
}

Test(strlowcase, mixed_case)
{
    char str[] = "HeLlO wOrLd!";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello world!", "Expected: \"hello world!\"\nGot: %s\n", s);
}

Test(strlowcase, non_alphanumeric)
{
    char str[] = "Hello World! 123";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello world! 123", "Expected: \"hello world! 123\"\nGot: %s\n", s);
}

Test(strlowcase, non_printable)
{
    char str[] = "Hello\tWorld!\n";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello\tworld!\n", "Expected: \"hello\tworld!\n\"\nGot: %s\n", s);
}

Test(strlowcase, non_printable_and_alphanumeric)
{
    char str[] = "Hello\tWorld! 123\n";
    char *s = my_strlowcase(str);

    cr_assert_str_eq(s, "hello\tworld! 123\n", "Expected: \"hello\tworld! 123\n\"\nGot: %s\n", s);
}

Test(strlowcase, null)
{
    char *s = my_strlowcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strlowcase, return_value)
{
    char str[] = "Hello World!";
    char *s = my_strlowcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}

Test(strlowcase, return_value_null)
{
    char *s = my_strlowcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strlowcase, return_value_empty)
{
    char str[] = "";
    char *s = my_strlowcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}
