/*
** EPITECH CHALLENGE, 2023
** strcapitalize tests
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(strcapitalize, already)
{
    char str[] = "Hello World!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, empty_string)
{
    char str[] = "";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "", "Expected: \"\"\nGot: %s\n", s);
}

Test(strcapitalize, all_uppercase)
{
    char str[] = "HELLO WORLD!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, all_lowercase)
{
    char str[] = "hello world!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, mixed_case)
{
    char str[] = "HeLlO wOrLd!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World!", "Expected: \"Hello World!\"\nGot: %s\n", s);
}

Test(strcapitalize, non_alphanumeric)
{
    char str[] = "Hello World! 123";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World! 123", "Expected: \"Hello World! 123\"\nGot: %s\n", s);
}

Test(strcapitalize, multiple_words)
{
    char str[] = "hello world! how are you?";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello World! How Are You?", "Expected: \"Hello World! How Are You?\"\nGot: %s\n", s);
}

Test(strcapitalize, with_tab)
{
    char str[] = "Hello\tworld!";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hello\tWorld!", "Expected: \"Hello\tWorld!\"\nGot: %s\n", s);
}

Test(strcapitalize, use_case)
{
    char str[] = "hey, how are you? 42WORds forty-two; fifty+one";
    char *s = my_strcapitalize(str);

    cr_assert_str_eq(s, "Hey, How Are You? 42words Forty-Two; Fifty+One", "Expected: \"Hey, How Are You? 42words Forty-Two; Fifty+One\"\nGot: %s\n", s);
}

Test(strcapitalize, null)
{
    char *s = my_strcapitalize(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}

Test(strcapitalize, return_value)
{
    char str[] = "Hello World!";
    char *s = my_strcapitalize(str);

    cr_assert_eq(s, str, "Expected: %p\nGot: %p\n", str, s);
}

Test(strcapitalize, return_value_null)
{
    char *s = my_strcapitalize(NULL);

    cr_assert_eq(s, NULL, "Expected: NULL\nGot: %p\n", s);
}
