/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:24:39 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/04 21:18:05 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = s;

	while (n--)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
			p++;
	}
	return (NULL);
}
