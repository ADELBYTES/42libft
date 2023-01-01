/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:06:37 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/26 21:43:54 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
    void	*ptr;
    size_t	i;

    if (num == 0 || size == 0)
        return (NULL);

	ptr	= malloc(num * size);
    if (!ptr)
        return (NULL);

    i = 0;
    while (i < num * size)
        ((unsigned char *)ptr)[i++] = 0;

    return (ptr);
}

