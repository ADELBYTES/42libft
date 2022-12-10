#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    /* Check for null pointers */
    if (!dst || !src)
    {
        return (0);
    }

    /* Copy the string up to a maximum of dstsize - 1 characters,
       ensuring that the dst buffer is always null-terminated */
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    /* Return the length of the src string, not including the null-terminator */
    return (ft_strlen(src));
}