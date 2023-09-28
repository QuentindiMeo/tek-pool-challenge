/*
** EPITECH CHALLENGE, 2023
** str_isalpha tests
*/

#include <criterion/criterion.h>

bool str_isalpha(const char *str);

Test(str_isalpha, test_00)
{
    bool result = str_isalpha("Hello World");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isalpha, test_01)
{
    bool result = str_isalpha("HelloWorld");

    cr_assert_eq(result, true, "Expected: %s, got: %s", "true", result ? "true" : "false");
}

Test(str_isalpha, test_02)
{
    bool result = str_isalpha("Hello World!");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isalpha, test_03)
{
    bool result = str_isalpha("HelloWorld!");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isalpha, test_04)
{
    bool result = str_isalpha("HelloWorld42");

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}

Test(str_isalpha, test_empty)
{
    bool result = str_isalpha("");

    cr_assert_eq(result, true, "Expected: %s, got: %s", "true", result ? "true" : "false");
}

Test(str_isalpha, test_null)
{
    bool result = str_isalpha(NULL);

    cr_assert_eq(result, false, "Expected: %s, got: %s", "false", result ? "true" : "false");
}
