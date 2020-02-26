/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    alphabet;

    alphabet = 'a';

    while (alphabet <= 'z')
    {
        ft_putchar(alphabet);
        alphabet++;
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


