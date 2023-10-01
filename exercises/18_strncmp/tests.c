/*
** EPITECH CHALLENGE, 2023
** strncmp tests
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, unsigned int n);

Test(strncmp, test_1)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_2)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strncmp, test_3)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strncmp, test_section)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 5);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_section2)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 6);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strncmp, test_section3)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 10);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strncmp, test_section4)
{
    char s1[] = "Hello";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 11);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strncmp, test_section5)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello";
    int result = my_strncmp(s1, s2, 11);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strncmp, test_bign)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 100);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_null_s1)
{
    char *s1 = NULL;
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 100);

    cr_assert_eq(result, -1, "Expected: -1\nGot: %d\n", result);
}

Test(strncmp, test_null_s2)
{
    char s1[] = "Hello World!";
    char *s2 = NULL;
    int result = my_strncmp(s1, s2, 100);

    cr_assert_eq(result, 1, "Expected: 1\nGot: %d\n", result);
}

Test(strncmp, test_null_both)
{
    char *s1 = NULL;
    char *s2 = NULL;
    int result = my_strncmp(s1, s2, 100);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_compare_0)
{
    char s1[] = "ZAZA";
    char s2[] = "OAOA";
    int result = my_strncmp(s1, s2, 0);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}