/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void    ft_ft (int *nbr);

void    ft_ft (int *nbr)
{
    *nbr = 43;
}

int     main()
{
    int     nbr;

    ft_ft(&nbr);
    printf("n = %d", nbr);
    return 0;
}
