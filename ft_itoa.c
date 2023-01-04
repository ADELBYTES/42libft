/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:24:29 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/04 21:58:14 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_itoa(int n)
{
    char	*str;
    int	sign;
    int	len;
    long	num;

	num = (long)n;
	sign = (num < 0) ? -1 : 1;
	len = (sign == -1) ? 2 : 1;
	num *= sign;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (n /= 10)
	{
		len++;
	}
	if (!str)
	{
		return (NULL);
	}
	str[len] = '\0';
	while (len--)
	{
	str[len] = (num % 10) + '0';
	num /= 10;
	}
	if (sign == -1)
	{
	str[0] = '-';
	}
	return (str);
}
