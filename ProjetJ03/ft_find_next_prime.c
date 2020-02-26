/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int i;

	while ((i = (nb - 1)) || 1)
	{
		while (i && (nb = (nb < 0) ? 0 : nb) && nb % i--)
			;
		if (nb++ > 1 && !i)
			return (nb - 1);
	}
}

int		main(void)
{
	int		i;

	i = -1;
	while (i++ <= 100)
		printf("ft_find_next_prime(%i) => %i\n", (i - 1),
		ft_find_next_prime(i - 1));
	return (0);
}
