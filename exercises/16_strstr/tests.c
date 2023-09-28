/*
** EPITECH CHALLENGE, 2023
** strstr tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strstr(char *str, char const *to_find);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strstr, test_hello_world, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char to_find[] = "World!";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "World!", "Expected: World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world2, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world3, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_hello_world4, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char to_find[] = "Hello World! ";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_empty_tofind, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char to_find[] = "";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "Hello World!", "Expected: Hello World!\nGot: %s\n", result);
}

Test(strstr, test_empty_str, .init = redirect_all_stdout)
{
    char str[] = "";
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_empty_str2, .init = redirect_all_stdout)
{
    char str[] = "";
    char to_find[] = "";
    char *result = my_strstr(str, to_find);

    cr_assert_str_eq(result, "", "Expected: \nGot: %s\n", result);
}

Test(strstr, test_null_str, .init = redirect_all_stdout)
{
    char *str = NULL;
    char to_find[] = "Hello World!";
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_null_tofind, .init = redirect_all_stdout)
{
    char str[] = "Hello World!";
    char *to_find = NULL;
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}

Test(strstr, test_null_both, .init = redirect_all_stdout)
{
    char *str = NULL;
    char *to_find = NULL;
    char *result = my_strstr(str, to_find);

    cr_assert_null(result, "Expected: NULL\nGot: %s\n", result);
}
