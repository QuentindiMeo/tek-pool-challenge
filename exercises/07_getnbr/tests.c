/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_getnbr(char const *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_getnbr, test_42, .init = redirect_all_stdout)
{
    int result = my_getnbr("42");
    cr_assert_eq(my_getnbr("42"), 42);
}

Test(my_getnbr, test_0, .init = redirect_all_stdout)
{
    int result = my_getnbr("0");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_7, .init = redirect_all_stdout)
{
    int result = my_getnbr("7");
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(my_getnbr, test_10, .init = redirect_all_stdout)
{
    int result = my_getnbr("10");
    cr_assert_eq(result, 10, "Expected 10, got %d", result);
}

Test(my_getnbr, test_100, .init = redirect_all_stdout)
{
    int result = my_getnbr("100");
    cr_assert_eq(result, 100, "Expected 100, got %d", result);
}

Test(my_getnbr, test_4221, .init = redirect_all_stdout)
{
    int result = my_getnbr("4221");
    cr_assert_eq(result, 4221, "Expected 4221, got %d", result);
}

Test(my_getnbr, test_str, .init = redirect_all_stdout)
{
    int result = my_getnbr("Hello World!");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_empty, .init = redirect_all_stdout)
{
    int result = my_getnbr("");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_null, .init = redirect_all_stdout)
{
    int result = my_getnbr(NULL);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_over, .init = redirect_all_stdout)
{
    int result = my_getnbr("2147483648000");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_under, .init = redirect_all_stdout)
{
    int result = my_getnbr("-2147483648000");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_multiple_minus, .init = redirect_all_stdout)
{
    int result = my_getnbr("--42");
    cr_assert_eq(result, 42, "Expected 42, got %d", result);
}

Test(my_getnbr, test_with_plus, .init = redirect_all_stdout)
{
    int result = my_getnbr("+-+42");
    cr_assert_eq(result, -42, "Expected -42, got %d", result);
}

Test(my_getnbr, test_with_spaces, .init = redirect_all_stdout)
{
    int result = my_getnbr("  31");
    cr_assert_eq(result, 31, "Expected 31, got %d", result);
}

Test(my_getnbr, test_with_parasite, .init = redirect_all_stdout)
{
    int result = my_getnbr("64lol01");
    cr_assert_eq(result, 64, "Expected 64, got %d", result);
}

Test(my_getnbr, test_with_metacharacters, .init = redirect_all_stdout)
{
    int result = my_getnbr("Hello\tWorld!\n\0");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}
