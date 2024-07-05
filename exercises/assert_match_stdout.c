#include <criterion/redirect.h>

void assert_match_stdout(char const *expected)
{
    size_t buffsize = 2 * strlen(expected);
    char *buf = malloc((buffsize + 1) * sizeof *buf);
    FILE *stream;
    size_t ret;

    if (buf == NULL)
        cr_skip("allocation failure.");
    stream = cr_get_redirected_stdout();
    ret = fread(buf, sizeof *buf, buffsize, stream);
    buf[ret] = '\0';
    cr_assert_str_eq(
        expected, buf,
        "Expected \"%s\", got \"%.*s\"",
        expected, (int)buffsize, buf
    );
}
