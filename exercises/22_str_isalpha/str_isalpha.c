/*
** EPITECH POOL CHALLENGE, 2023
** str_isalpha
*/

/* ALLOWED FUNCTIONS: none */

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Check if a string is only composed of alphabetical characters
 *
 * @param str The string to check
 * @return bool Whether the string is only composed of alphabetical characters
 */
bool str_isalpha(const char *str)
{
    if (str == NULL)
        return (false);
    if (str[0] == '\0')
        return (false);
    for (size_t i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            return (false);
    return (true);
}