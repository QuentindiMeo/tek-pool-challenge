/*
** EPITECH CHALLENGE, 2023
** strncat tests
*/

#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, unsigned int n);

Test(strncat, should_concatenate_5_bytes)
{
    char dest[6] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 5);
    cr_assert_eq_str("HelloWorld", "Expected %s to be %s", "HelloWorld");
}

Test(strncat, should_concatenate_0_bytes)
{
    char dest[6] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 0);
    cr_assert_eq_str("Hello", "Expected %s to be %s", "Hello");
}

Test(strncat, should_concatenate_11_bytes)
{
    char dest[6] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 11);
    cr_assert_eq_str("HelloWorld", "Expected %s to be %s", "HelloWorld");
}

Test(strncat, should_concatenate_6_bytes)
{
    char dest[6] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 6);
    cr_assert_eq_str("HelloWorld", "Expected %s to be %s", "HelloWorld");
}

Test(strncat, null_dest)
{
    char *dest = NULL;
    char const *src = "Hello World";

    my_strncat(dest, src, 5);
    cr_assert_eq(dest, NULL);
}

Test(strncat, null_src)
{
    char dest[11] = "Hello World";
    char const *src = NULL;

    my_strncat(dest, src, 5);
    cr_assert_eq_str("Hello World", "Expected %s to be %s", "Hello World");
}

Test(strncat, null_dest_and_src)
{
    char *dest = NULL;
    char const *src = NULL;

    my_strncat(dest, src, 5);
    cr_assert_eq(dest, NULL);
}

Test(strncat, empty_dest)
{
    char dest[11] = "";
    char const *src = "Hello World";

    my_strncat(dest, src, 5);
    cr_assert_eq_str("Hello", "Expected %s to be %s", "Hello");
}

Test(strncat, empty_src)
{
    char dest[11] = "Hello World";
    char const *src = "";

    my_strncat(dest, src, 5);
    cr_assert_eq_str("Hello World", "Expected %s to be %s", "Hello World");
}

Test(strncat, empty_dest_and_src)
{
    char dest[11] = "";
    char const *src = "";

    my_strncat(dest, src, 5);
    cr_assert_eq_str("", "Expected %s to be %s", "");
}

Test(strncat, return_value)
{
    char dest[11] = "Hello World";
    char const *src = "dlroW olleH";
    char *ret = my_strncat(dest, src, 5);

    cr_assert_eq(ret, dest);
}
