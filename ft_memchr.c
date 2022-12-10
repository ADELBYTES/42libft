/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:53:48 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/10 22:20:14 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *	ft_memchr(const void *s, int c, size_t n)
{

char *altsrc;
altsrc = ((unsigned char *)s);
size_t i;
i = 0;

while (n > 0){
if (altsrc[i] == ((unsigned char)c)){
return (&altsrc[i]);

}
i++;
n--;
}
return NULL;



}
