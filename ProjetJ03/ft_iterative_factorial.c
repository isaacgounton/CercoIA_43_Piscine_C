/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     ft_iterative_factorial(int nb);

int     ft_iterative_factorial(int nb)
{
    int     fact;

    fact = 1;
    while (nb > 0)
        fact *= nb--;
    return ((nb >= 0 ? fact : 0));
}

int     main()
{
    int     n;

    n = 4;
    printf("Iterative factor of %d! = %d", n, ft_iterative_factorial(n));
    return (0);
}


