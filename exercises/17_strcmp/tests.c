/*
** EPITECH CHALLENGE, 2023
** strcmp tests
*/

#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(strcmp, test_hello_world)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strcmp, test_hello_world2)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strcmp, test_hello_world3)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_hello_world4)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_hello_world5)
{
    char s1[] = "Hello World!!";
    char s2[] = "Hello World!";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strcmp, test_nb1)
{
    char s1[] = "Hello";
    char s2[] = "Hello1";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_nb2)
{
    char s1[] = "Hello1";
    char s2[] = "Hello";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strcmp, test_nb3)
{
    char s1[] = "Hello1";
    char s2[] = "Hello2";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_nb4)
{
    char s1[] = "Hello9";
    char s2[] = "Hello2";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strcmp, test_null_s1)
{
    char *s1 = NULL;
    char s2[] = "Hello";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_null_s2)
{
    char s1[] = "Hello";
    char *s2 = NULL;
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strcmp, test_null_both)
{
    char *s1 = NULL;
    char *s2 = NULL;
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strcmp, test_empty_s1)
{
    char s1[] = "";
    char s2[] = "World";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strcmp, test_empty_s2)
{
    char s1[] = "World";
    char s2[] = "";
    int result = my_strcmp(s1, s2);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}
