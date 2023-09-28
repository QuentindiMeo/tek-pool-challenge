/*
** EPITECH CHALLENGE, 2023
** strncmp tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strncmp(char const *s1, char const *s2, int n);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strncmp, test_1, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_2, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, 33, "Expected: 33\nGot: %d\n", result);
}

Test(strncmp, test_3, .init = redirect_all_stdout)
{
    char s1[] = "Hello World";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 12);

    cr_assert_eq(result, -33, "Expected: -33\nGot: %d\n", result);
}

Test(strncmp, test_section, .init = redirect_all_stdout)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 5);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}

Test(strncmp, test_section2, .init = redirect_all_stdout)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 6);

    cr_assert_eq(result, 106, "Expected: 106\nGot: %d\n", result);
}

Test(strncmp, test_section3, .init = redirect_all_stdout)
{
    char s1[] = "HellolWorld!!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 10);

    cr_assert_eq(result, -106, "Expected: -106\nGot: %d\n", result);
}

Test(strncmp, test_bign, .init = redirect_all_stdout)
{
    char s1[] = "Hello World!";
    char s2[] = "Hello World!";
    int result = my_strncmp(s1, s2, 100);

    cr_assert_eq(result, 0, "Expected: 0\nGot: %d\n", result);
}