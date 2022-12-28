#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
    if (n == INT_MIN)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        c = n % 10 + '0';
        write(fd, &c, 1);
    }
    else
    {
        c = n + '0';
        write(fd, &c, 1);
    }
}