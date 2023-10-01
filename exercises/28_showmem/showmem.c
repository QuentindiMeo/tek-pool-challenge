/*
** EPITECH POOL CHALLENGE, 2023
** showmem
*/

/* ALLOWED FUNCTIONS: write, my_strlen */
/* DESCRIPTION: Each line of the output manages 16 characters
    and is divided into three columns:
    • The hexadecimal address of the line’s first character,
    • the content in hexadecimal,
    • the content in printable characters.
    Any non printable characters must be replaced by a dot. */
/* EXAMPLE:
    $> ./showmem "hey guys show me" 16
    00000000: 6865 7920 6775 7973 2073 686f 7720 6d65 hey guys show me */
/* PRO TIPS: read `man hexdump` (-C). Don’t forget the padding
    if there aren’t enough characters to have a valid alignment. */

#include <unistd.h>

unsigned int my_strlen(char const *str);
int my_putchar(char c);
int my_putstr(char const *str);

/**
 * @brief Displays the characters of a string
 *
 * @param str The string to display
 * @param size The size of the string
 * @return int The number of bytes printed
 */
int my_showmem(char const *str, int size)
{
    return 0;
}