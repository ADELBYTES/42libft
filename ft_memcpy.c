#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n){


unsigned char *altdest = dest; /*pts to add*/
const unsigned char *altsrc  = src;


while (n > 0){

*altdest++ = *altsrc++;



}
    return (dest);

}
