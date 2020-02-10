/* GROUPE 20 */

#include "colle.h"

void    colle05(int a, int b)
{
    int     i;
    int     j;

    i=1;
    j=1;
    while (i<=b)
    {
        if (i==1)
            ft_putchar('A');
        else if (i==b)
            ft_putchar('C');
        else
            ft_putchar('B');
        j=2;
        while (j<=a)
        {
            if (j==a && i==1 )
                ft_putchar('C');
            if (j==a && i==b && b!=1)
                ft_putchar('A');
            if (j==a && i!=1 && i!=b)
                ft_putchar('B');
            if (j<a && (i==b || i==1))
                ft_putchar('B');
            if (i>1 && i<b)
                ft_putchar(' ');
            j++;
        }

        ft_putchar('\n');
        i++;

    }

}
