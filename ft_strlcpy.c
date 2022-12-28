/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:56:23 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/26 18:57:40 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t i;

    if (dst == NULL || src == NULL)
    {
        return 0;
    }

    src_len = ft_strlen(src);
    if (src_len + 1 < dstsize)
    {
        i = 0;
        while (i < src_len)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    else
    {
        if (dstsize > 0)
        {
            i = 0;
            while (i < dstsize - 1)
            {
                dst[i] = src[i];
                i++;
            }
            dst[i] = '\0';
        }
    }

    return src_len;
}
