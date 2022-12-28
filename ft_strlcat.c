/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoralla <mnoralla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:07:57 by mnoralla          #+#    #+#             */
/*   Updated: 2022/12/24 15:56:03 by mnoralla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlcat: appends the string src to the end of the dst buffer, up to a maximum of size characters.
   The function ensures that the dst buffer is always null-terminated, even if the copy is truncated.
   The function returns the total length of the resulting string, not including the null-terminator. */
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    /* Initialize variables for the indices of the dst and src strings */
    size_t i = 0;
    size_t j = 0;

    /* Iterate over the dst string until the null-terminator is found or the maximum size is reached */
    while (dst[i] && i < size)
    {
        i++;
    }

    /* Iterate over the src string, appending the characters to the end of the dst string,
       up to a maximum of size - 1 characters, ensuring that the dst buffer is always null-terminated */
    while (src[j] && (i + j + 1) < size)
    {
        dst[i + j] = src[j];
        j++;
    }

    /* If the maximum size has not been reached, add the null-terminator to the end of the dst string */
    if (i < size)
    {
        dst[i + j] = '\0';
    }

    /* Return the total length of the resulting string, not including the null-terminator */
    return (i + ft_strlen(src));
}
