/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:07:51 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/20 23:07:52 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    char *result = malloc(len1 + len2 + 1);
    if (result == NULL)
        return NULL;
    ft_memcpy(result, s1, len1);
    ft_memcpy(result + len1, s2, len2 + 1);
    return result;
}