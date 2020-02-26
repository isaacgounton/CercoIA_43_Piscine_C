/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_numeric(char *str)
{
	while (*str++)
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9'))
			return (0);
	return (1);
}

int		main(void)
{
	char    str[20] = "10";

	printf("ft_str_is_numeric(%s) => %d\n", str, ft_str_is_numeric(str));
	return (0);
}
