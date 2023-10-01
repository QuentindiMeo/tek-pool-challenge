/*
** EPITECH CHALLENGE, 2023
** strcpy tests
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(strcpy, test_hello)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello", "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strcpy, test_world)
{
    char dest[6] = {0};

    my_strcpy(dest, "World");
    cr_assert_str_eq(dest, "World", "dest is \"%s\" instead of \"World\"", dest);
}

Test(strcpy, test_overwrite)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    my_strcpy(dest, "World");
    cr_assert_str_eq(dest, "World", "dest is \"%s\" instead of \"World\"", dest);
}

Test(strcpy, test_empty)
{
    char dest[6] = {0};

    my_strcpy(dest, "");
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_null)
{
    char dest[6] = {0};

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_null_src)
{
    char dest[4] = {'o', 'u', 'i', 0};

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_return)
{
    char dest[6] = {0};

    cr_assert_eq(my_strcpy(dest, "Hello"), dest, "return is not dest");
}
