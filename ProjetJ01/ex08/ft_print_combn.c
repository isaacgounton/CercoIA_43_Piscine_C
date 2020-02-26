/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_print_combn(int n)
{
    int		i;
    int		j;
    int		t[n];

    if ((n <= 0 || n >= 10) || (i = 0))
        return ;
    while (i++ < n)
        t[i - 1] = i - 1;
    while (t[0] <= (10 - n) && ((j = 0) || 1))
    {
        i = n - 1;
        while (j++ < n)
            ft_putchar('0' + t[j - 1]);
        if (t[0] < (10 - n))
            ft_putstr(", ");
        t[i]++;
        while (i)
            if ((t[i] > (10 - n + i) && (t[--i]++ || 1)) || (i-- && 0))
                t[i + 1] = (t[i] < (11 - n + i)) ? (t[i] + 1) : (t[i - 1] + 3);
        while (++i < n)
            t[i] = (t[i] > 10 - n + i) ? t[i - 1] + 1 : t[i];
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

