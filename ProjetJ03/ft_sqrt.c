/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	nb = ((nb < 0) ? -nb : nb);
	while ((i * i) < nb)
		i++;
	return (((i * i) == nb) ? i : 0);
}

int		main(void)
{
	int		i;

	i = -25;
	while (i++ <= 25)
		printf("ft_sqrt(%i) => %d\n", (i - 1), ft_sqrt(i - 1));
	return (0);
}
