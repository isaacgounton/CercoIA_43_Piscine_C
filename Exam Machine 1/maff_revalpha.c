/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    maff_revalpha(void);
void    ft_putchar(char c);

void    maff_revalpha(void)
{
    char c;
    char alpha;

	c = 'z';
	while (c-- >= 'a')
		ft_putchar(c + 1);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

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

int main()
{
    printf("%s", text);
    return 0;
}

