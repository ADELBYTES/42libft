#include "libft.h"

int		ft_tolower(int c)
{
    while (c >= 'A' && c <= 'Z')
    {
        c += ('a' - 'A');
    }
    return (c);
}