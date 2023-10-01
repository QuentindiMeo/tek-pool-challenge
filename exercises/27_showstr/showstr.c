/*
** EPITECH POOL CHALLENGE, 2023
** showstr
*/

/* ALLOWED FUNCTIONS: write, my_strlen */
/* PRO TIPS: For instance, "I like \n ponies!"
        will be printed as "I like \0a ponies!". */

#include <unistd.h>

unsigned int my_strlen(char const *str);
int my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);

/**
 * @brief Displays a string of characters on the standard output, with non-printable characters displayed as "\xx"
 *
 * @param str The string to display
 * @return int The number of bytes printed
 */
unsigned int my_showstr(char const *str)
{
    int ret = 0;
    if (str == NULL)
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            ret += my_putchar('\\');
            if (str[i] < 16) {
                ret += my_putchar('0');
            }
            ret += my_put_nbr(str[i]);
        } else
            ret += my_putchar(str[i]);
    }
    return 0;
}