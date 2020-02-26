/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    aff_last_param(char *str);

void    aff_last_param(char *str)
{
    while (*str++)
        aff_last_param(*(str - 1));
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main()
{
    aff_last_param("Isaac est cool");
    return 0;
}
