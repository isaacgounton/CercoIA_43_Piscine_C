/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if ((i == 1
		|| !((str[i - 3] >= 'a' && str[i - 3] <= 'z')
			|| (str[i - 3] >= 'A' && str[i - 3] <= 'Z')))
		&& (str[i - 1] >= 'a' && str[i - 2] <= 'z'))
			str[i - 1] -= ('a' - 'A');
	return (str);
}

int		main(void)
{
	char text[100] = "salut, comment tu vas ? 43mots quarante-trois; cinquante+et+un";
	printf("%s\n", text);
	printf("%s\n", ft_strcapitalize(text));
	return (0);
}

