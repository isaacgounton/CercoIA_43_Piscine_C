/* login : g.isaac@groupecerco.com */

#include "main.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{

    while (*str++)
                ft_putchar(*(str - 1));
}

int     main()
{
    ft_putstr("ft_print_comb2() => ");
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
