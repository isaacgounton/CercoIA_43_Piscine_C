/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putstr(char *str);

void    ft_putstr(char *str)
{
    while (*str++)
        ft_putchar(*(str - 1));
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main()
{
    ft_putstr("Isaac est cool");
    return 0;
}
