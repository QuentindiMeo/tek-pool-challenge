/*
** EPITECH CHALLENGE, 2023
** strupcase tests
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(strupcase, basic_usage)
{
    char str[] = "Hello World!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, empty_string)
{
    char str[] = "";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "", "Expected: \"\"\nGot: %s\n", s);
}

Test(strupcase, all_uppercase)
{
    char str[] = "HELLO WORLD!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, all_lowercase)
{
    char str[] = "hello world!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, mixed_case)
{
    char str[] = "HeLlO wOrLd!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, non_alphanumeric)
{
    char str[] = "Hello World! 123";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD! 123", "Expected: \"HELLO WORLD! 123\"\nGot: %s\n", s);
}

Test(strupcase, non_printable)
{
    char str[] = "Hello\tWorld!\n";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO\tWORLD!\n", "Expected: \"HELLO\tWORLD!\n\"\nGot: %s\n", s);
}

Test(strupcase, null)
{
    char *s = my_strupcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strupcase, return_value)
{
    char str[] = "Hello World!";
    char *s = my_strupcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}

Test(strupcase, return_value_null)
{
    char *s = my_strupcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strupcase, return_value_empty)
{
    char str[] = "";
    char *s = my_strupcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}
