/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:06:37 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/15 13:37:56 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
	{
		num = 0;
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (size > 0 && SIZE_MAX / size < num)
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}
