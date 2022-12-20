#include "libft.h"

void *ft_calloc(size_t num, size_t size){

void *p;
size_t i = 0;


p = malloc(num * size);
if (!p)
    return (NULL);
while (i < num * size){

((unsigned char *)p)[i] = '0';
++i;

}
return (p);


}