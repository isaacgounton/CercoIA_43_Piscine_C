/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int		i;

	i = nb - 1;
	if (nb > 1)
		while (nb % i--)
			;
	return ((!i && nb != 1) ? 1 : 0);
}

int		main(void)
{
	int		i;

	i = 0;
	while (i++ <= 100)
		printf("ft_is_prime(%i) => %i\n", (i - 1), ft_is_prime(i - 1));
	return (0);
}
