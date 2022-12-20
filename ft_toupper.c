#include "libft.h"

int		ft_toupper(int c)
{
    while (c >= 'a' && c <= 'z')
    {
        c -= ('a' - 'A');
    }
    return (c);
}