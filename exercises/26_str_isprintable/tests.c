/*
** EPITECH CHALLENGE, 2023
** str_isprintable tests
*/

#include <criterion/criterion.h>

bool my_str_isprintable(char const *str);

Test(str_isprintable, empty_string)
{
    bool ret = my_str_isprintable("");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, lowercase)
{
    bool ret = my_str_isprintable("hello");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, uppercase)
{
    bool ret = my_str_isprintable("HELLO");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, mixed)
{
    bool ret = my_str_isprintable("Hello");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, special_chars)
{
    bool ret = my_str_isprintable("Hello World!");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, with_space)
{
    bool ret = my_str_isprintable("HELLO WORLD");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, numbers)
{
    bool ret = my_str_isprintable("A12345");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, all_chars)
{
    bool ret = my_str_isprintable("HelloWorld12345!");

    cr_assert_eq(ret, true, "Expected %d to be %d", ret, true);
}

Test(str_isprintable, null)
{
    bool ret = my_str_isprintable(NULL);

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isprintable, non_printable)
{
    bool ret = my_str_isprintable("\x01\x02\x03\x04\x00");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isprintable, non_printable_2)
{
    bool ret = my_str_isprintable("\x05\x06\x07\x08\x09");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isprintable, non_printable_mixed)
{
    bool ret = my_str_isprintable("aL!o\x05\x06uEtTe");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}

Test(str_isprintable, non_printable_mixed_2)
{
    bool ret = my_str_isprintable("aL!ouEtTe\x07\x08");

    cr_assert_eq(ret, false, "Expected %d to be %d", ret, false);
}
