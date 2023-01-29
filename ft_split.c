/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:25:37 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/14 23:20:01 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	t = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!t)
		return (NULL);
	while (s[i])
	{
		k = i;
		while (s[i] != c && s[i])
			i++;
		if (i > k)
			t[j++] = ft_substr(s, k, i - k);
		while (s[i] == c && s[i])
			i++;
	}
	t[j] = NULL;
	return (t);
}
