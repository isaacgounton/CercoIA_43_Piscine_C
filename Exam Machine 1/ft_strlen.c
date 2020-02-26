/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (*str++)
        i++;
    return i++;
}

int     main()
{
    char    text[] = "Cerco is the best.";

    printf("Numbers: %d", ft_strlen(text));
    return 0;
}

