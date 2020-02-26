/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_strrev(char *str);

char    *ft_strrev(char *str)
{
    int     i;
    int     j;
    char    *tmp;

    i = 0;
    tmp = str;

    while (*tmp++)

    j = tmp - str;
    while (--j > i)
    {
        tmp = str[i];
        str[i++] = str[j];
        str[j] = tmp;
    }
    return (str);
}

int     main()
{
    char nom[] = "Isaac";

    printf("Prenom: %s", ft_strrev(nom));
    return 0;
}

