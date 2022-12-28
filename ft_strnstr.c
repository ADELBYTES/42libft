/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:08:20 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/24 16:15:59 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0, j = 0;

    // If the needle is an empty string, return the haystack
    if (*needle == '\0')
        return (char *)haystack;

    // Iterate over the characters in the haystack
    while (haystack[i] != '\0' && i < len)
    {
        // Iterate over the characters in the needle
        while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
            j++;

        // If we have reached the end of the needle, a match has been found
        if (needle[j] == '\0')
            return (char *)(haystack + i);

        // Reset j for the next iteration
        j = 0;
        i++;
    }

    // If no match was found, return NULL
    return NULL;
}

