/*
** EPITECH CHALLENGE, 2023
** strcmp tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strcmp(char const *s1, char const *s2);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strcmp, test_hello_world, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strcmp, test_hello_world2, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 33, "Expected: 33\nGot: %d\n", result);
}

Test(strcmp, test_hello_world3, .init = redirect_all_stdout)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -33, "Expected: -33\nGot: %d\n", result);
}

Test(strcmp, test_hello_world4, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -33, "Expected: -33\nGot: %d\n", result);
}

Test(strcmp, test_hello_world5, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!!";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 33, "Expected: 33\nGot: %d\n", result);
}

Test(strcmp, test_nb1, .init = redirect_all_stdout)
{
    char s1[] = "Hello";
    char s2[] = "Hello1";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -49, "Expected: -49\nGot: %d\n", result);
}

Test(strcmp, test_nb2, .init = redirect_all_stdout)
{
    char s1[] = "Hello1";
    char s2[] = "Hello";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 49, "Expected: 49\nGot: %d\n", result);
}

Test(strcmp, test_nb3, .init = redirect_all_stdout)
{
    char s1[] = "Hello1";
    char s2[] = "Hello2";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_nb4, .init = redirect_all_stdout)
{
    char s1[] = "Hello9";
    char s2[] = "Hello2";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 7, "Expected: 7\nGot: %d\n", result);
}

Test(strcmp, test_null_s1, .init = redirect_all_stdout)
{
    char *s1 = NULL;
    char s2[] = "Hello";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -72, "Expected: -72\nGot: %d\n", result);
}

Test(strcmp, test_null_s2, .init = redirect_all_stdout)
{
    char s1[] = "Hello";
    char *s2 = NULL;
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 72, "Expected: 72\nGot: %d\n", result);
}

Test(strcmp, test_null_both, .init = redirect_all_stdout)
{
    char *s1 = NULL;
    char *s2 = NULL;
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strcmp, test_empty_s1, .init = redirect_all_stdout)
{
    char s1[] = "";
    char s2[] = "World";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -87, "Expected: -87\nGot: %d\n", result);
}

Test(strcmp, test_empty_s2, .init = redirect_all_stdout)
{
    char s1[] = "World";
    char s2[] = "";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 87, "Expected: 87\nGot: %d\n", result);
}