#include "libft.h"
int		ft_memcmp(const void *s1, const void *s2, size_t n){

size_t i = 0;
const unsigned char *altdest = s2;
const unsigned char *altsrc  = s1;


while (n > 0){
if (altdest[i] != altsrc[i]){
return (altdest[i] - altsrc[i]);
}
i++;
n--;


}
return (*altsrc - *altdest);

}