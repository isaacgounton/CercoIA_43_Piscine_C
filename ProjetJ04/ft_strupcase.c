/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if (str[i - 2] >= 'a' && str[i - 2] <= 'z')
			str[i - 2] -= ('a' - 'A');
	return (str);
}

int		main(void)
{
	char	text[35] = "abcdefghijklmnopqrstuvwxyz";

	printf("TEXT: %s\n", text);
	printf("UPPER: %s\n", ft_strupcase(text));
	return (0);
}
