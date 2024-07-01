/*
** EPITECH CHALLENGE, 2023
** showmem tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_showmem(char const *str, int size);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(showmem, should_print_16_bytes, .init = redirect_all_stdout)
{
    char const *str = "hey guys show me";
    int ret = my_showmem(str, 16);

    cr_log(1, cr_redirect_stdout);
    cr_assert_stdout_eq_str("00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n");
    cr_assert_eq(ret, 16, "Expected to write %d bytes, wrote %d", 16, ret);
}

Test(showmem, should_print_32_bytes, .init = redirect_all_stdout)
{
    char const *str = "hey guys show me";
    int ret = my_showmem(str, 32);

    cr_assert_stdout_eq_str("00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n"
                            "00000010: 0000 0000 0000 0000 0000 0000 0000 0000 ................\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me\n"
                            "00000010: 0000 0000 0000 0000 0000 0000 0000 0000 ................\n");
    cr_assert_eq(ret, 32, "Expected to write %d bytes, wrote %d", 32, ret);
}

Test(showmem, empty_string, .init = redirect_all_stdout)
{
    char const *str = "";
    int size = 16;
    int ret = my_showmem(str, size);

    cr_assert_stdout_eq_str("", "Expected %s to be %s", cr_redirect_stdout, "");
    cr_assert_eq(ret, 0, "Expected to write %d bytes, wrote %d", 0, ret);
}

Test(showmem, one_tab, .init = redirect_all_stdout)
{
    char const *str = "\t";
    int size = 1;
    int ret = my_showmem(str, 1);

    cr_assert_stdout_eq_str("00000000: 09                                       .\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 09                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_space, .init = redirect_all_stdout)
{
    char const *str = " ";
    int size = 1;
    int ret = my_showmem(str, 1);

    cr_assert_stdout_eq_str("00000000: 20                                       .\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 20                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_newline, .init = redirect_all_stdout)
{
    char const *str = "\n";
    int size = 1;
    int ret = my_showmem(str, 1);

    cr_assert_stdout_eq_str("00000000: 0a                                       .\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 0a                                       .\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, one_m, .init = redirect_all_stdout)
{
    char const *str = "m";
    int size = 1;
    int ret = my_showmem(str, 1);

    cr_assert_stdout_eq_str("00000000: 6d                                       m\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 6d                                       m\n");
    cr_assert_eq(ret, 1, "Expected to write %d bytes, wrote %d", 1, ret);
}

Test(showmem, hello_world, .init = redirect_all_stdout)
{
    char const *str = "Hello World!";
    int size = 12;
    int ret = my_showmem(str, size);

    cr_assert_stdout_eq_str("00000000: 4865 6c6c 6f20 576f 726c 6421            Hello World!\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 4865 6c6c 6f20 576f 726c 6421            Hello World!\n");
    cr_assert_eq(ret, 12, "Expected to write %d bytes, wrote %d", 12, ret);
}

Test(showmem, hello_world_2, .init = redirect_all_stdout)
{
    char const *str = "Hello World!";
    int size = 13;
    int ret = my_showmem(str, size);

    cr_assert_stdout_eq_str("00000000: 4865 6c6c 6f20 576f 726c 6421 00         Hello World!.\n",
                            "Expected %s to be %s", cr_redirect_stdout,
                            "00000000: 4865 6c6c 6f20 576f 726c 6421 00         Hello World!.\n");
    cr_assert_eq(ret, 13, "Expected to write %d bytes, wrote %d", 13, ret);
}
