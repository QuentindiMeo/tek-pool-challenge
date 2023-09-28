/*
** EPITECH CHALLENGE, 2023
** str_isupper tests
*/

#include <criterion/criterion.h>

bool my_str_isupper(char const *str);

Test(str_isupper, empty_string)
{
    bool ret = my_str_isupper("");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isupper, lowercase)
{
    bool ret = my_str_isupper("hello");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, uppercase)
{
    bool ret = my_str_isupper("HELLO");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isupper, mixed)
{
    bool ret = my_str_isupper("Hello");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, special_chars)
{
    bool ret = my_str_isupper("Hello World!");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, with_space)
{
    bool ret = my_str_isupper("HELLO WORLD");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isupper, numbers)
{
    bool ret = my_str_isupper("A12345");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, all_chars)
{
    bool ret = my_str_isupper("HelloWorld12345!");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, null)
{
    bool ret = my_str_isupper(NULL);

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, non_printable)
{
    bool ret = my_str_isupper("\x01\x02\x03\x04\x05");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isupper, non_printable_mixed)
{
    bool ret = my_str_isupper("ello\x01orld\x02");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}
