/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main()
{
    int     a;
    int     b;
    int     div;
    int     mod;

    a = 5;
    b = 2;

    ft_div_mod(a, b, &div, &mod);
    printf("DIV = %d et MOD = %d", div, mod);
    return 0;
}
