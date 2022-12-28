/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:07:39 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/24 15:56:01 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s && *s != (char)c)
    {
        s++;
    }

    if (*s == (char)c)
    {
        return ((char *)s);
    }
    else
    {
        return (NULL);
    }
}

