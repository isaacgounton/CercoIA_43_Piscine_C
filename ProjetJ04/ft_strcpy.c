/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i++])
        dest[i - 1] = src[i - 1];
    dest[i - 1] = '\0';
    return (dest);
}

int		main(void)
{
	char	text[25];

	ft_strcpy(text, "I'm the best!");
	printf("Text: %s", text);
	return (0);
}
