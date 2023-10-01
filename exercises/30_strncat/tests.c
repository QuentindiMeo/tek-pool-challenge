/*
** EPITECH CHALLENGE, 2023
** strncat tests
*/

#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, unsigned int n);

Test(strncat, should_concatenate_5_bytes)
{
    char dest[16] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 5);
    cr_assert_str_eq(dest, "HelloWorld", "Expected %s to be %s", "HelloWorld", dest);
}

Test(strncat, should_concatenate_0_bytes)
{
    char dest[16] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 0);
    cr_assert_str_eq(dest, "Hello", "Expected %s to be %s", "Hello", dest);
}

Test(strncat, should_concatenate_11_bytes)
{
    char dest[16] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 11);
    cr_assert_str_eq(dest, "HelloWorld", "Expected %s to be %s", dest, "HelloWorld");
}

Test(strncat, should_concatenate_6_bytes)
{
    char dest[16] = "Hello";
    char const *src = "World";

    my_strncat(dest, src, 6);
    cr_assert_str_eq(dest, "HelloWorld", "Expected %s to be %s", dest, "HelloWorld");
}

Test(strncat, null_dest)
{
    char *dest = NULL;
    char const *src = "Hello World";

    my_strncat(dest, src, 5);
    cr_assert_eq(dest, NULL, "Expected %s to be %s", dest, NULL);
}

Test(strncat, null_src)
{
    char dest[11] = "Hello World";
    char const *src = NULL;

    my_strncat(dest, src, 5);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strncat, null_dest_and_src)
{
    char *dest = NULL;
    char const *src = NULL;

    my_strncat(dest, src, 5);
    cr_assert_eq(dest, NULL, "Expected %s to be %s", dest, NULL);
}

Test(strncat, empty_dest)
{
    char dest[11] = "";
    char const *src = "Hello World";

    my_strncat(dest, src, 5);
    cr_assert_str_eq(dest, "Hello", "Expected %s to be %s", dest, "Hello");
}

Test(strncat, empty_src)
{
    char dest[11] = "Hello World";
    char const *src = "";

    my_strncat(dest, src, 5);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strncat, empty_dest_and_src)
{
    char dest[11] = "";
    char const *src = "";

    my_strncat(dest, src, 5);
    cr_assert_str_eq(dest, "", "Expected %s to be %s", dest, "");
}

Test(strncat, return_value)
{
    char dest[21] = "Hello World";
    char const *src = "dlroW olleH";
    char *ret = my_strncat(dest, src, 5);

    cr_assert_eq(ret, dest, "Expected %p to be %p", ret, dest);
}
