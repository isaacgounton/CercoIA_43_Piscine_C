/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_print_comb2(void)
{
    int     number1;
    int     number2;

    number1 = -1;

    while (++number1, number1 <= 98 && number2 = number1)
    {
        while (++number2, number2 <= 99)
        {
            ft_putchar((char) number1 / 10 + '0');
            ft_putchar((char) number1 % 10 + '0');
            ft_putstr(" ");
            ft_putchar((char) number2 / 10 + '0');
            ft_putchar((char) number2 % 10 + '0');
            ft_putstr(",");
        }
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    while (*str++)
        ft_putchar(*(str - 1));
}
