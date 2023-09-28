/*
** EPITECH CHALLENGE, 2023
** str_islower tests
*/

#include <criterion/criterion.h>

bool my_str_islower(const char *str);

Test(str_islower, empty_string)
{
    bool ret = my_str_islower("");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_islower, lowercase_string1)
{
    bool ret = my_str_islower("abcdefghijklmnopqrstuvwxyz");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_islower, lowercase_string2)
{
    bool ret = my_str_islower("helloworld");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_islower, lowercase_string3)
{
    bool ret = my_str_islower("hey");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_islower, lowercase_string4)
{
    bool ret = my_str_islower("a");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_islower, uppercase_string)
{
    bool ret = my_str_islower("ABCXYZ");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, with_space)
{
    bool ret = my_str_islower("hello world");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, mixed_string)
{
    bool ret = my_str_islower("Hello World");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, non_alphabetical_string)
{
    bool ret = my_str_islower("Hello World!");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, non_alphabetical_string_2)
{
    bool ret = my_str_islower("Hello World 42");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, non_alphabetical_string_3)
{
    bool ret = my_str_islower("Hello World 42!");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_islower, null)
{
    bool ret = my_str_islower(NULL);

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}
