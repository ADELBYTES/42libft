/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:07:46 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/24 15:56:02 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{       
    char *res;
    size_t i;
    i = 0;
    res = (char*)malloc(ft_strlen(str) + 1);

if (!res){
    return (NULL);
}
while (str[i])
{
    res[i] = str[i];
    ++i;
}
res[i] = '\0';
return (res);
}

