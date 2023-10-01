/*
** EPITECH POOL CHALLENGE, 2023
** putchar
*/

/* ALLOWED FUNCTIONS: write */
/* PROHIBITED: everything else */

#include <unistd.h>

/**
 * @brief Print a character on stdout
 *
 * @param c The character to print
 * @return int The number of bytes printed
 */
int my_putchar(char c)
{
    if (c == '\0')
        return 0;
    return write(1, &c, 1);
}