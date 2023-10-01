/*
** EPITECH POOL CHALLENGE, 2023
** strncpy
*/

/* ALLOWED FUNCTIONS: my_strlen */
/* PRO TIPS: read `man strncpy`
 * dest is assumed to have enough memory to hold n characters;
 * Add '\0's if n is strictly greater than the length of the string. Do not
 * add '\0' if nis strictly lower than the length of the string (because dest
 * is not supposed to contain more than n bytes.
 */

#include <stddef.h>

unsigned int my_strlen(char const *str);

/**
 * @brief Copy a given number of characters from a string to another
 *
 * @param dest The destination string
 * @param src The source string
 * @param n The number of characters from src to copy into dest
 * @return char* The parameter dest
 */
char *my_strncpy(char *dest, char const *src, unsigned int n)
{
    return dest;
}