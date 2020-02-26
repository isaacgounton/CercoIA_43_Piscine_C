/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void    aff_z(char *str);

void    aff_z(char *str)
{
    int i;
    char z[2] = "z";

    i = 0;
    while (*str++)
        ft_putchar(*(str - 1));
}

void ft_putchar(char c)
{
        write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

int     main()
{
    aff_z("Isaac est zool");
    return 0;
}

