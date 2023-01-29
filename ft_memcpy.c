/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:24:49 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/12 19:17:51 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	if (!src && !dst)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dst;
	i = 0;
	while (i < num)
	{
		cdest[i] = (unsigned char)csrc[i];
		i++;
	}
	return (cdest);
}
