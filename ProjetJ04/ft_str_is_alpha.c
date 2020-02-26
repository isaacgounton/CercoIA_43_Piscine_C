/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str)
{
	while (*str++)
		if (!((*(str - 1) >= 'a' && *(str - 1) <= 'z')
		|| (*(str - 1) >= 'A' && *(str - 1) <= 'Z')))
			return (0);
	return (1);
}

int		main(void)
{
	char    str[20] = "Hello";

	printf("ft_str_is_alpha(%s) => %d\n", str, ft_str_is_alpha(str));
	return (0);
}
