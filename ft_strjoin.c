#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;

    /* Allocate memory for the new string */
    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);

    /* Concatenate the two strings */
    i = 0;
    j = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';

    /* Return the new string */
    return (str);
}