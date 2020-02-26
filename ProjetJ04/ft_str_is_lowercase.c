/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_lowercase(char *str)
{
	while (*str++)
		if (!(*(str - 1) >= 'a' && *(str - 1) <= 'z'))
			return (0);
	return (1);
}

int		main(void)
{
	char    str[20] = "hello";

	printf("ft_str_is_lowercase(%s) => %d\n", str, ft_str_is_lowercase(str));
	return (0);
}
