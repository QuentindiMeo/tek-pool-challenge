/*
** EPITECH CHALLENGE, 2023
** sample tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strlen(char const *str);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_strlen, test_hello_world, .init = redirect_all_stdout)
{
    int result = my_strlen("Hello World!");
    cr_assert_eq(result, 12, "Expected 12, got %d", result);
}

Test(my_strlen, test_empty, .init = redirect_all_stdout)
{
    int result = my_strlen("");
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_strlen, test_null, .init = redirect_all_stdout)
{
    int result = my_strlen(NULL);
    cr_assert_eq(result, 0, "Expected 0, got %d", result);
}

Test(my_strlen, test_very_long, .init = redirect_all_stdout)
{
    int result = my_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Sed non risus. Suspendisse lectus tortor, dignissim sit amet, \
adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam.");
    cr_assert_eq(result, 186, "Expected 186, got %d", result);
}

Test(my_strlen, test_with_nulls, .init = redirect_all_stdout)
{
    int result = my_strlen("Hello\0World!");
    cr_assert_eq(result, 5, "Expected 5, got %d", result);
}

Test(my_strlen, test_with_metacharacters, .init = redirect_all_stdout)
{
    int result = my_strlen("Hello\tWorld!");
    cr_assert_eq(result, 12, "Expected 12, got %d", result);
}
