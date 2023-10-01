/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>

int my_getnbr(char const *str);

Test(my_getnbr, test_42)
{
    int result = my_getnbr("42");
    cr_assert_eq(my_getnbr("42"), 42);
}

Test(my_getnbr, test_0)
{
    int result = my_getnbr("0");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_7)
{
    int result = my_getnbr("7");
    cr_assert_eq(result, 7, "Expected 7, got %d", result);
}

Test(my_getnbr, test_10)
{
    int result = my_getnbr("10");
    cr_assert_eq(result, 10, "Expected 10, got %d", result);
}

Test(my_getnbr, test_100)
{
    int result = my_getnbr("100");
    cr_assert_eq(result, 100, "Expected 100, got %d", result);
}

Test(my_getnbr, test_4221)
{
    int result = my_getnbr("4221");
    cr_assert_eq(result, 4221, "Expected 4221, got %d", result);
}

Test(my_getnbr, test_str)
{
    int result = my_getnbr("Hello World!");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_empty)
{
    int result = my_getnbr("");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_null)
{
    int result = my_getnbr(NULL);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_over)
{
    int result = my_getnbr("2147483648000");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_under)
{
    int result = my_getnbr("-2147483648000");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_getnbr, test_multiple_minus)
{
    int result = my_getnbr("--42");
    cr_assert_eq(result, 42, "Expected 42, got %d", result);
}

Test(my_getnbr, test_with_plus)
{
    int result = my_getnbr("+-+42");
    cr_assert_eq(result, -42, "Expected -42, got %d", result);
}

Test(my_getnbr, test_with_padding)
{
    int result = my_getnbr(" \n\t 31");
    cr_assert_eq(result, 31, "Expected 31, got %d", result);
}

Test(my_getnbr, test_with_parasite)
{
    int result = my_getnbr("64lol01");
    cr_assert_eq(result, 64, "Expected 64, got %d", result);
}

Test(my_getnbr, test_with_metacharacters)
{
    int result = my_getnbr("Hello\tWorld!\n\0");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}
