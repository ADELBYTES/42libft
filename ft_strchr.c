#include "libft.h"

char * ft_strchr(const char *s, int c){

while(*s != c){
	if (*s == '\0'){
		return (0);

	}
	s++;
}
return (char *)s;

}