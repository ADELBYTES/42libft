/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:24:57 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/01 20:24:58 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *temp1;
    const unsigned char *temp2;
    size_t i;

    if (dst == NULL || src == NULL)
    {

        return NULL;

    }

    temp1 = (unsigned char*)dst;
    temp2 = (const unsigned char*)src;
    i = 0;

    if (dst < src)
    {
        while (i < len)
        {
            temp1[i] = temp2[i];
            i++;
        }
    }
    else if (dst > src)
    {
        while (i < len)
    {
            temp1[len - i - 1] = temp2[len - i - 1];
            i++;
    }
    }
    return dst;
}
