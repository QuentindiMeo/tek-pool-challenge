/*
** EPITECH CHALLENGE, 2023
** strcapitalize tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strcapitalize(char *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strcapitalize, already, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, empty_string, .init = redirect_all_stdout)
{
    char str[] = "";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "", "Expected: \"\"\nGot: %s\n", s);
}

Test(strcapitalize, all_uppercase, .init = redirect_all_stdout)
{
    char str[] = "HELLO WORLD!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, all_lowercase, .init = redirect_all_stdout)
{
    char str[] = "hello world!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, mixed_case, .init = redirect_all_stdout)
{
    char str[] = "HeLlO wOrLd!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, non_alphanumeric, .init = redirect_all_stdout)
{
    char str[] = "Hello World! 123";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World! 123", "Expected: \"Hello World! 123\"\nGot: %s\n", s);
}

Test(strcapitalize, multiple_words, .init = redirect_all_stdout)
{
    char str[] = "hello world! how are you?";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World! How Are You?", "Expected: \"Hello World! How Are You?\"\nGot: %s\n", s);
}

Test(strcapitalize, non_printable, .init = redirect_all_stdout)
{
    char str[] = "Hello\tworld!\n";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello\tWorld!\n", "Expected: \"Hello\tWorld!\n\"\nGot: %s\n", s);
}

Test(strcapitalize, use_case, .init = redirect_all_stdout)
{
    char str[] = "hey, how are you? 42WORds forty-two; fifty+one";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hey, How Are You? 42words Forty-Two; Fifty+One", "Expected: \"Hey, How Are You? 42words Forty-Two; Fifty+One\"\nGot: %s\n", s);
}

Test(strcapitalize, null, .init = redirect_all_stdout)
{
    char *s = my_strcapitalize(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strcapitalize, return_value, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char *s = my_strcapitalize(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}

Test(strcapitalize, return_value_null, .init = redirect_all_stdout)
{
    char *s = my_strcapitalize(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}
