/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_div_mod(int *a, int *b);

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     c;

    c = *a % *b;

    *a = *a / *b;
    *b = c;
}

int     main()
{
    int     a;
    int     b;

    a = 27;
    b = 4;

    ft_ultimate_div_mod(&a, &b);
    printf("DIVISION = %d et MODULO = %d", a, b);
    return 0;
}
