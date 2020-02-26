/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void    ft_swap(int *a, int *b);

void    ft_swap(int *a, int *b)
{
    int     c;

    c = *a;

    *a = *b;
    *b = c;
}

int     main()
{
    int     a;
    int     b;

    a = 5;
    b = 10;

    ft_swap(&a, &b);
    printf("a = %d et b = %d", a, b);
    return 0;
}
