
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    // Iterate over the characters in the strings
    while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
        // If the characters are not equal, return the difference
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];

        i++;
    }

    // If one of the strings has been exhausted, return the difference
    // between the two strings
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}