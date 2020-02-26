/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    else if ( nb / 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
