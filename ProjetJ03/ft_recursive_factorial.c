/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_factorial(int nb);

int     ft_recursive_factorial(int nb)
{
    int fact;

    fact = 1;
    while (nb > 0)
        return (nb * ft_recursive_factorial(nb - 1));
    return ((nb >= 0)? fact : 0);
}

int     main()
{
    int     n;

    n = 5;
    printf("Factorielle recursive de %d! = %d", n, ft_recursive_factorial(n));
    return (0);
}
