/*
** EPITECH CHALLENGE, 2023
** showmem tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_showmem(char const *str, int size);
void assert_match_stdout(char const *expected);

Test(showmem, should_print_16_bytes, .init = cr_redirect_stdout)
{
    char const *str = "hey guys show me";
    int ret = my_showmem(str, 16);


    assert_match_stdout("00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n");
    cr_assert_eq(ret, 16, "Expected to write %d bytes, wrote %d", 16, ret);
}

Test(showmem, should_print_32_bytes, .init = cr_redirect_stdout)
{
    char const *str = "hey guys show me";
    int ret = my_showmem(str, 32);

    assert_match_stdout(
        "00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n"
        "00000010: 0000 0000 0000 0000 0000 0000 0000 0000 ................\n");
    cr_assert_eq(ret, 32, "Expected to write %d bytes, wrote %d", 32, ret);
}

Test(showmem, empty_string, .init = cr_redirect_stdout)
{
    char const *str = "";
    int size = 16;
    int ret = my_showmem(str, size);

    assert_match_stdout("");
    cr_assert_eq(ret, 0, "Expected to write %d bytes, wrote %d", 0, ret);
}

Test(showmem, one_tab, .init = cr_redirect_stdout)
{
    char const *str = "\t";
    int size = 1;
    int ret = my_showmem(str, 1);

    assert_match_stdout("00000000: 09                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_space, .init = cr_redirect_stdout)
{
    char const *str = " ";
    int size = 1;
    int ret = my_showmem(str, 1);

    assert_match_stdout("00000000: 20                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_newline, .init = cr_redirect_stdout)
{
    char const *str = "\n";
    int size = 1;
    int ret = my_showmem(str, 1);

    assert_match_stdout("00000000: 0a                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_m, .init = cr_redirect_stdout)
{
    char const *str = "m";
    int size = 1;
    int ret = my_showmem(str, 1);

    assert_match_stdout("00000000: 6d                                       m\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, hello_world, .init = cr_redirect_stdout)
{
    char const *str = "Hello World!";
    int size = 12;
    int ret = my_showmem(str, size);

    assert_match_stdout("00000000: 4865 6c6c 6f20 576f 726c 6421            Hello World!\n");
    cr_assert_eq(ret, 12, "Expected to write %d bytes, wrote %d", 12, ret);
}

Test(showmem, hello_world_2, .init = cr_redirect_stdout)
{
    char const *str = "Hello World!";
    int size = 13;
    int ret = my_showmem(str, size);

    assert_match_stdout("00000000: 4865 6c6c 6f20 576f 726c 6421 00         Hello World!.\n");
    cr_assert_eq(ret, 13, "Expected to write %d bytes, wrote %d", 13, ret);
}
