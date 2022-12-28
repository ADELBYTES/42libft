

#include "libft.h"

void *ft_memset(void *s, int c,  size_t len){

unsigned char *p = (unsigned char *)s;
while(len--){
    *p++ = (unsigned char) c;

}
return s;
}


