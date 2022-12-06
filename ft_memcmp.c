#include "libft.h"
int ft_memccpy(void *s1, void *s2, size_t len){

size_t i;
char *altdest; /* of type pointer to char */
char *altsrc;

altdest = (unsigned char *)s2;
altsrc = (unsigned char *)s1;


while (len > 0){
if (altdest[i] != altsrc[i]){
return (altdest[i] - altsrc[i]);
}
i++;
len--;


}
return (0);

}
