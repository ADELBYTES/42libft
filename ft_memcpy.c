#include "libft.h"
void *ft_memcpy(void *s, void *dest, int c,  size_t len){

size_t i;
unsigned char *altdest; /* of type pointer to char */
unsigned char *altsrc;

altdest = (unsigned char *)dest;
altsrc = (unsigned char *)s;


while (len > 0){
altdest[i] = altsrc[i];
i++;
len--;
}
return (dest);







}
