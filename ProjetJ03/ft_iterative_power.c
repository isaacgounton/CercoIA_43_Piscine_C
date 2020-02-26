/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     ft_iterative_power(int nb, int power);

int     ft_iterative_power(int nb, int power)
{
    int     result;

    result = nb;
    if (power <= 1)
        return ((power == 1) ? result : 0);
    while (--power)
        result *= nb;
    return (result);
}

int		main(void)
{
    int     n;
    int     pow;

    n = 5;
    pow = 2;
    printf("Iterative power of %d^%d = %d", n, pow, ft_iterative_power(n, pow));
	return (0);
}
