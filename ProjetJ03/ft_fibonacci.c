/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index);

int		ft_fibonacci(int index)
{
	if (index <= 1)
		return ((index < 0) ? -1 : index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int		main(void)
{
	int		i;

	i = -10;
	while (i++ <= 10)
		printf("ft_fibonacci(%i) => %i\n", (i - 1), ft_fibonacci((i - 1)));
	return (0);
}
