#include "libft.h"


char *ft_strtrim(char const *s1, char const *set)
{
    size_t start, end;
    size_t len;
    char *result;

    if (s1 == NULL || set == NULL)
        return NULL;

    start = 0;
    while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
        start++;

    end = ft_strlen(s1);
    if (end > 0)
        end--;
    while (end > start && ft_strchr(set, s1[end]) != NULL)
        end--;

    len = end - start + 1;
    result = malloc(len + 1);
    if (result == NULL)
        return NULL;

    ft_strlcpy(result, s1 + start, len + 1);

    return result;
}