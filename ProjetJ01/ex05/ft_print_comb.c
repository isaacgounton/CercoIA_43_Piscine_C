/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_print_comb(void)
{
    char    number1;
    char    number2;
    char    number3;

    number1 = '0';

    while ((number1 <= '7') && (number2 = number1 + 1))
    {
       while ((number2 <= '8') && (number3 = number2 + 1))
       {
           while (number3 <= '9')
           {
               ft_putchar(number1);
               ft_putchar(number2);
               ft_putchar(number3);
               ft_putstr(", ");
               number3++;
           }
            number2++;
       }
        number1++;
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
