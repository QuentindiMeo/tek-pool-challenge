/*
** EPITECH CHALLENGE, 2023
** strncpy tests
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, unsigned int n);

Test(strncpy, test_hello)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 5);
    cr_assert_str_eq(dest, "Hello", "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strncpy, test_world)
{
    char dest[6] = {0};

    my_strncpy(dest, "World", 5);
    cr_assert_str_eq(dest, "World", "dest is \"%s\" instead of \"World\"", dest);
}

Test(strncpy, test_overwrite)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 5);
    my_strncpy(dest, "World", 3);
    cr_assert_str_eq(dest, "Worlo", "dest is \"%s\" instead of \"Worlo\"", dest);
}

Test(strncpy, test_overflow)
{
    char dest[6] = {0};

    my_strncpy(dest, "Overflow", 5);
    cr_assert_str_eq(dest, "Overf", "dest is \"%s\" instead of \"Overf\"", dest);
}

Test(strncpy, test_empty)
{
    char dest[6] = {0};

    my_strncpy(dest, "", 5);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strncpy, test_null)
{
    char dest[6] = {0};

    my_strncpy(dest, NULL, 5);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strncpy, test_n)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 3);
    cr_assert_str_eq(dest, "Hel", "dest is \"%s\" instead of \"Hel\"", dest);
}

Test(strncpy, test_n_overflow)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 10);
    cr_assert_str_eq(dest, "Hello", "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strncpy, test_n_0)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 0);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strncpy, test_n_null)
{
    char dest[6] = {0};

    my_strncpy(dest, NULL, 0);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strncpy, test_n_null_src)
{
    char dest[6] = {0};

    my_strncpy(dest, NULL, 5);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strncpy, test_return)
{
    char dest[6] = {0};

    cr_assert_eq(my_strncpy(dest, "Hello", 5), dest, "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strncpy, test_return_null_src)
{
    char dest[6] = {0};

    cr_assert_eq(my_strncpy(dest, NULL, 5), dest, "dest is \"%s\" instead of NULL", dest);
}

Test(strncpy, test_return_n)
{
    char dest[6] = {0};

    cr_assert_eq(my_strncpy(dest, "Hello", 5), dest, "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strncpy, test_return_n_null_src)
{
    char dest[6] = {0};

    cr_assert_eq(my_strncpy(dest, NULL, 5), dest, "dest is \"%s\" instead of NULL", dest);
}

Test(strncpy, test_return_n_0)
{
    char dest[6] = {0};

    cr_assert_eq(my_strncpy(dest, "Hello", 0), dest, "dest is \"%s\" instead of \"\"", dest);
}
