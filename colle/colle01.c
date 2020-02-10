/* GROUPE 20 */

#include "colle.h"

void    colle01 (int a, int b)
{
    int     i;
    int     j;

    i=1;
    j=1;
    while (i<=b)
    {
        if (i==1 || i==b)
            ft_putchar('O');
        else
            ft_putchar('|');

        j=2;
        while (j<=a)
        {
            if (j==a && (i==1 || i==b))
                ft_putchar('O');
            if (j==a && i!=1 && i!=b)
                ft_putchar('|');
            if (j<a && (i==b || i==1))
                ft_putchar('-');
            if (i>1 && i<b)
                ft_putchar(' ');
            j++;
        }

        ft_putchar('\n');
        i++;

    }

}
