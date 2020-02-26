/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (str[i++] && ((j = 0) || 1))
	{
		if (str[i - 1] == to_find[j])
			while (to_find[j] && str[i + j - 1] && str[i + j - 1] == to_find[j])
				j++;
		if (j && !to_find[j])
			return (str + i - 1);
	}
	return (NULL);
}

int		main(void)
{
	char    *s1;
	char    *s2;

	s1 = "Hello Cerco";
	s2 = "C";

	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strstr(s1, s2) => %s\n", ft_strstr(s1, s2));
	return (0);
}
