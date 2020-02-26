/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n-- && *s1++ == *s2++)
		;
	return ((*s1 && *s2) ? (*--s1 - *--s2) : (*s1 - *s2));
}

void	main(void)
{
	char    *s1;
	char    *s2;
	int     n;

	s1 = "CERCO IA";
	s2 = "CERCO IA";
	n = 20;

	printf("s1 => %s\ns2 => %s\nn => %d\n\n", s1, s2, n);
	printf("ft_strncmp(s1, s2, n) => %d\n", ft_strncmp(s1, s2, n));
	return (0);
}


