/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			str[i - 1] -= ('A' - 'a');
	return (str);
}

int		main(void)
{
	char	text[35] = "02Cerco IA is also called 43";

	printf("TEXT: %s\n", text);
	printf("LOWER: %s\n", ft_strlowcase(text));
	return (0);
}

