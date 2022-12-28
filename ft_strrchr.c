/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:42:32 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/24 22:42:34 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *result = NULL;

    while (*s)
    {
        if (*s == (char)c)
        {
            result = (char *)s;
        }
        s++;
    }

    if (c == '\0')
    {
        result = (char *)s;
    }

    return result;
}