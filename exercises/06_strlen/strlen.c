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
unsigned int my_strlen(char const *str)
{
    if (str == NULL)
        return 0;
    for (int i = 0; ; i++)
        if (str[i] == '\0')
            return i;
    return 0;
}