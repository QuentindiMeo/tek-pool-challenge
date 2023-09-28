/*
** EPITECH CHALLENGE, 2023
** strupcase tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strupcase(char *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strupcase, basic_usage, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, empty_string, .init = redirect_all_stdout)
{
    char str[] = "";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "", "Expected: \"\"\nGot: %s\n", s);
}

Test(strupcase, all_uppercase, .init = redirect_all_stdout)
{
    char str[] = "HELLO WORLD!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, all_lowercase, .init = redirect_all_stdout)
{
    char str[] = "hello world!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, mixed_case, .init = redirect_all_stdout)
{
    char str[] = "HeLlO wOrLd!";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD!", "Expected: \"HELLO WORLD!\"\nGot: %s\n", s);
}

Test(strupcase, non_alphanumeric, .init = redirect_all_stdout)
{
    char str[] = "Hello World! 123";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO WORLD! 123", "Expected: \"HELLO WORLD! 123\"\nGot: %s\n", s);
}

Test(strupcase, non_printable, .init = redirect_all_stdout)
{
    char str[] = "Hello\tWorld!\n";
    char *s = my_strupcase(str);

    cr_assert_str_eq(s, "HELLO\tWORLD!\n", "Expected: \"HELLO\tWORLD!\n\"\nGot: %s\n", s);
}

Test(strupcase, null, .init = redirect_all_stdout)
{
    char *s = my_strupcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strupcase, return_value, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char *s = my_strupcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}

Test(strupcase, return_value_null, .init = redirect_all_stdout)
{
    char *s = my_strupcase(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strupcase, return_value_empty, .init = redirect_all_stdout)
{
    char str[] = "";
    char *s = my_strupcase(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}
