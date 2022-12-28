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
    void	*p;
    size_t	i;

    if (num == 0 || size == 0)
        return NULL;

    p = malloc(num * size);
    if (!p)
        return NULL;

    for (i = 0; i < num * size; i++)
        ((unsigned char *)p)[i] = 0;

    return p;
}

