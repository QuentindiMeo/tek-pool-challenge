/*
** EPITECH CHALLENGE, 2023
** str_isnum tests
*/

#include <criterion/criterion.h>

bool my_str_isnum(const char *str);

Test(str_isnum, test_helloworld)
{
    bool result = my_str_isnum("Hello World");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isnum, test_num_all)
{
    bool result = my_str_isnum("0123456789");

    cr_assert_eq(result, true, "Expected: %s, got: %s", "true", result ? "true" : "false");
}

Test(str_isnum, test_num)
{
    bool result = my_str_isnum("0123");

    cr_assert_eq(result, true, "Expected: %s, got: %s", "true", result ? "true" : "false");
}

Test(str_isnum, test_num_space)
{
    bool result = my_str_isnum("0123 ");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isnum, test_num_space_num)
{
    bool result = my_str_isnum("0123 4567");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isnum, test_num_space_num_space)
{
    bool result = my_str_isnum("0123 4567 ");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}