
#define SIZE 5
#include "libft.h"

void *ft_memccpy(void *s, void *dest, int c,  size_t len){

size_t i;
char *altdest; /* of type pointer to char */
char *altsrc;

altdest = (char *)dest;
altsrc = (char *)s;


while (len > 0){
altdest[i] = altsrc[i];
if( altsrc[i] == ((unsigned char)c)){
	return (altdest + i + 1);
}

i++;
len--;

}






}
