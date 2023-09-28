/*
** EPITECH CHALLENGE, 2023
** strstr tests
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(strstr, test_hello_world)
{
    char str[] = "Hello World!";
    char to_find[] = "World!";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "World!", "Expected: World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world2)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world3)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world4)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello World! ";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_empty_tofind)
{
    char str[] = "Hello World!";
    char to_find[] = "";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_empty_str)
{
    char str[] = "";
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_empty_str2)
{
    char str[] = "";
    char to_find[] = "";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "", "Expected: \nGot: %s\n", result);
}

Test(strstr, test_null_str)
{
    char *str = NULL;
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_null_tofind)
{
    char str[] = "Hello World!";
    char *to_find = NULL;
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_null_both)
{
    char *str = NULL;
    char *to_find = NULL;
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}
