/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:08:20 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/12 19:56:36 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		length;
	char	*hay;
	char	*nid;

	hay = (char *) haystack;
	nid = (char *) needle;
	if (*nid == '\0')
		return (hay);
	if (len == 0)
		return (0);
	i = 0;
	length = ft_strlen(nid);
	while (hay[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((hay + i), nid, length) == 0)
		{
			return (hay + i);
		}
		i++;
	}
	return (NULL);
}
