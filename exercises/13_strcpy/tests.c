/*
** EPITECH CHALLENGE, 2023
** strcpy tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strcpy(char *dest, char const *src);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(strcpy, test_hello, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello", "dest is \"%s\" instead of \"Hello\"", dest);
}

Test(strcpy, test_world, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, "World");
    cr_assert_str_eq(dest, "World", "dest is \"%s\" instead of \"World\"", dest);
}

Test(strcpy, test_overwrite, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    my_strcpy(dest, "World");
    cr_assert_str_eq(dest, "World", "dest is \"%s\" instead of \"World\"", dest);
}

Test(strcpy, test_overflow, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, "Overflow");
    cr_assert_str_eq(dest, "Overf", "dest is \"%s\" instead of \"Overf\"", dest);
}

Test(strcpy, test_empty, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, "");
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_null, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_null_dest, .init = redirect_all_stdout)
{
    char *dest = NULL;

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, NULL, "dest is \"%s\" instead of NULL", dest);
}

Test(strcpy, test_null_src, .init = redirect_all_stdout)
{
    char dest[4] = {'o', 'u', 'i', 0};

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, "", "dest is \"%s\" instead of \"\"", dest);
}

Test(strcpy, test_null_both, .init = redirect_all_stdout)
{
    char *dest = NULL;

    my_strcpy(dest, NULL);
    cr_assert_str_eq(dest, NULL, "dest is \"%s\" instead of NULL", dest);
}

Test(strcpy, test_return, .init = redirect_all_stdout)
{
    char dest[6] = {0};

    cr_assert_eq(my_strcpy(dest, "Hello"), dest, "return is not dest");
}

Test(strcpy, test_return_null, .init = redirect_all_stdout)
{
    char *dest = NULL;

    cr_assert_eq(my_strcpy(dest, "Hello"), dest, "dest is \"%s\" instead of NULL", dest);
}
