#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
7	{
8	
9	size_t i = 0;
10	char *p = (char *)malloc(sizeof(char) * (len+ 1));
11	if (p == NULL){
12	    return NULL;
13	
14	}
15	while(len > 0){
16	if (s[start]){
17	p[i++] = s[start];
18	len--;
19	start++;
20	}
21	
22	
23	}
24	return p;
25	
26	}

