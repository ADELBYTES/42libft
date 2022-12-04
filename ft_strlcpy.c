#include "libft.h"

size_t strlcat(char * dst, const char * src, size_t dstsize){

size_t ch;
size_t d;

if( dstsize <= ft_strlen(dst)){
	return dstsize + ft_strlen(src);
}

ch = ft_strlen(dst);
d = 0;

while(src[d] > 0 && ch + 1 < dstsize){
dst[ch] = src[d]
d++;
ch++; 

}
dst[ch] ='\0';
return (ft_strlen(dst) + ft_strlen(src));


}