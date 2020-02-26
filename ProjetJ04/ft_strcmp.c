/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1++ == *s2++)
		;
	return (*--s1 - *--s2);
}

int		main(void)
{
	char    *s1;
	char    *s2;

	s1 = "Ceraco";
	s2 = "Ceaejco";

	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strcmp(s1, s2) => %d\n", ft_strcmp(s1, s2));
	return (0);
}

