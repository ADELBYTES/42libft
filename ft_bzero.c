#include "libft.h"

void bzero(void *s, size_t n){

size_t i = 0;
char *ptr;

ptr = s;

while(i < n){

	ptr[i] = 0;
	i++;
}

}