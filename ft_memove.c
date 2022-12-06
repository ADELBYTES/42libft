#include "libft.h"

void * ft_memove(void * dst, const void * src, size_t len){

unsigned char *temp1;
unsigned char *temp2;
size_t i = 0;

temp1 = dst;
temp2 = (unsigned char *)src;

if (dst < src){

return (ft_memcpy(src, dst, len));


}
	
if (dst > src){
while(len--){
temp1[i] = temp2[i];
}
return dst;
}

}