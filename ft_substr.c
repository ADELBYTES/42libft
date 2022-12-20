#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len){
    char *p;
    size_t i;

    i = 0;
    p = (char*)malloc(sizeof(char) * (len + 1));
    if (p == NULL)
        return (NULL);
    while (len > 0)
    {
        if (s[start])
        {
            p[i++] = s[start];
            len--;
            start++;
        }
    }
    return (p);
}

