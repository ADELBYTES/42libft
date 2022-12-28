#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *result;
    int     i;

    if (!s || !f)
        return (NULL);
    if (!(result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}