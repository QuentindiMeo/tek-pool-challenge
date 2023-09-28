/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_swap(int *a, int *b);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_swap, test_00, .init = redirect_all_stdout)
{
    int a = 42;
    int b = 21;

    my_swap(&a, &b);
    cr_assert_eq(a, 21, "Expected 21, got %d", a);
    cr_assert_eq(b, 42, "Expected 42, got %d", b);
}

Test(my_swap, test_01, .init = redirect_all_stdout)
{
    int a = 0;
    int b = 0;

    my_swap(&a, &b);
    cr_assert_eq(a, 0, "Expected 0, got %d", a);
    cr_assert_eq(b, 0, "Expected 0, got %d", b);
}

Test(my_swap, test_02, .init = redirect_all_stdout)
{
    int a = 42;
    int b = 42;

    my_swap(&a, &b);
    cr_assert_eq(a, 42, "Expected 42, got %d", a);
    cr_assert_eq(b, 42, "Expected 42, got %d", b);
}

Test(my_swap, test_03, .init = redirect_all_stdout)
{
    int a = 42;
    int b = -21;

    my_swap(&a, &b);
    cr_assert_eq(a, -21, "Expected -21, got %d", a);
    cr_assert_eq(b, 42, "Expected 42, got %d", b);
}

Test(my_swap, test_04, .init = redirect_all_stdout)
{
    int a = -42;
    int b = 21;

    my_swap(&a, &b);
    cr_assert_eq(a, 21, "Expected 21, got %d", a);
    cr_assert_eq(b, -42, "Expected -42, got %d", b);
}

Test(my_swap, test_05, .init = redirect_all_stdout)
{
    int a = -42;
    int b = -21;

    my_swap(&a, &b);
    cr_assert_eq(a, -21, "Expected -21, got %d", a);
    cr_assert_eq(b, -42, "Expected -42, got %d", b);
}