/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_print_numbers(void)
{
    char    numbers;

    numbers = '0';

    while (numbers <= '9')
    {
        ft_putchar(numbers);
        numbers++;
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
