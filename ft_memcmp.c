/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:24:45 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/01 20:24:46 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    size_t i = 0;

    while (i < n && p1[i] == p2[i])
    {
        i++;
    }

    if (i == n)
    {
        return 0;
    }

    return p1[i] - p2[i];
}
