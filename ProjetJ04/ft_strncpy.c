/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n && src[i - 1])
		dest[i - 1] = src[i - 1];
	while (i++ < n)
		dest[i - 2] = '\0';
	return (dest);
}

void	main(void)
{
	char text[20];
	int	n;

	ft_strncpy(text, "God will make a way for me.", 3);
	printf("Text: %s", text);
	return (0);
}
