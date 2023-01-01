/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:25:37 by mnoralla          #+#    #+#             */
/*   Updated: 2023/01/01 20:25:38 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;
    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    int num_words = count_words(s, c);
    char **result = malloc(sizeof(char *) * (num_words + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < num_words)
    {
        while (s[j] == c)
            j++;
        k = j;
        while (s[j] && s[j] != c)
            j++;
        result[i] = malloc(sizeof(char) * (j - k + 1));
        j = k;
        k = 0;
        while (s[j] && s[j] != c)
            result[i][k++] = s[j++];
        result[i][k] = '\0';
        i++;
    }
    result[i] = 0;
    return result;
}
