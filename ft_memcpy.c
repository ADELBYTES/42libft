

#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char  *altdest;
    const unsigned char *altsrc;

    if (dest == NULL || src == NULL)
        return (NULL);
    altdest = (unsigned char*)dest;
    altsrc = (const unsigned char*)src;
    while (n-- > 0)
        *altdest++ = *altsrc++;
    return (dest);
}
