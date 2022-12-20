#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *temp1 = dst;
    const unsigned char *temp2 = src;
    size_t i;

    i = 0;
    if (dst < src)
    {
    return (ft_memcpy(dst, src, len));\
    }
    else if (dst > src)
    {
        while (i < len)
        {
            temp1[i] = temp2[i];
            i++;
        }
        return (dst);
    }
    return (NULL);
}