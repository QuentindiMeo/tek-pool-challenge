/*
** EPITECH POOL CHALLENGE, 2023
** strlen
*/

/* ALLOWED FUNCTIONS: none */

#include <stddef.h>

/**
 * @brief Compute the length of a string
 *
 * @param str The string whose length is to be found
 * @return int The length of the string
 */
int my_strlen(char const *str)
{
    if (str == NULL)
        return 0;
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}