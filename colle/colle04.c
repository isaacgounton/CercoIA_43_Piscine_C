
/* GROUPE 20 */

#include "colle.h"

void    colle04(int x, int y)
{
    int     i;
    int     j;

    j=1;
    while(j<=y)
	{
		i=1;
        while(i<=x)
       {
    	if (j == 1)
            {
                if (i == 1)
                    ft_putchar('A');
                else if (i== x)
                    ft_putchar('C');
                else
                    ft_putchar('B');
            }
            else if (j == y)
            {
                if (i== 1)
                    ft_putchar('A');
                else if (i== x)
                    ft_putchar('C');
                else
                    ft_putchar('B');
            }
            else
            {
                if (i == 1 || i == x)
                    ft_putchar('B');
                else
                    ft_putchar(' ');
            }
            i++;
	     }
        ft_putchar('\n');
		 j++;
	}
}
