#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t len){

size_t i = 0;
while( i < len){
	if(src != '\0'){
		dst += src[i];
		i++;
	}
}
	return dst;

}