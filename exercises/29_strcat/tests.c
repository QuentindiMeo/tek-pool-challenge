/*
** EPITECH CHALLENGE, 2023
** strcat tests
*/

#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(strcat, should_concatenate_two_strings)
{
    char dest[11] = "Hello";
    char const *src = " World";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strcat, should_concatenate_two_strings_with_empty_dest)
{
    char dest[11] = "";
    char const *src = "Hello World";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strcat, should_concatenate_two_strings_with_empty_src)
{
    char dest[11] = "Hello World";
    char const *src = "";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strcat, should_concatenate_two_strings_with_empty_strings)
{
    char dest[11] = "";
    char const *src = "";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "", "Expected %s to be %s", dest, "");
}

Test(strcat, null_dest)
{
    char *dest = NULL;
    char const *src = "Hello World";

    my_strcat(dest, src);
    cr_assert_eq(dest, NULL, "Expected %s to be %s", dest, NULL);
}

Test(strcat, null_src)
{
    char dest[11] = "Hello World";
    char const *src = NULL;

    my_strcat(dest, src);
    cr_assert_str_eq(dest, "Hello World", "Expected %s to be %s", dest, "Hello World");
}

Test(strcat, null_strings)
{
    char *dest = NULL;
    char const *src = NULL;

    my_strcat(dest, src);
    cr_assert_eq(dest, NULL, "Expected %s to be %s", dest, NULL);
}

Test(strcat, return_value)
{
    char dest[11] = "Hello";
    char const *src = " World";
    char *ret = my_strcat(dest, src);

    cr_assert_eq(ret, dest, "Expected %p to be %p", ret, dest);
}

Test(strcat, return_value_null_dest)
{
    char *dest = NULL;
    char const *src = "Hello World";
    char *ret = my_strcat(dest, src);

    cr_assert_eq(ret, NULL, "Expected %p to be %p", ret, NULL);
}

Test(strcat, return_value_null_src)
{
    char dest[11] = "Hello World";
    char const *src = NULL;
    char *ret = my_strcat(dest, src);

    cr_assert_eq(ret, dest, "Expected %p to be %p", ret, dest);
}

Test(strcat, return_value_null_strings)
{
    char *dest = NULL;
    char const *src = NULL;
    char *ret = my_strcat(dest, src);

    cr_assert_eq(ret, NULL, "Expected %p to be %p", ret, NULL);
}
