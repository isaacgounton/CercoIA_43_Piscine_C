/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_power(int nb, int power);

int     ft_recursive_power(int nb, int power)
{
    if (power <= 1)
        return ((power) ? nb : 0);

    return nb * (ft_recursive_power(nb, power - 1));
}

int		main(void)
{
    int n;
    int pow;

    n = 4;
    pow = 3;
    printf("Recursive power of %d^%d = %d", n, pow, ft_recursive_power(n, pow));
	return (0);
}
