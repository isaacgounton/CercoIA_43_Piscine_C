/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size);

void	ft_sort_integer_table(int *tab, int size)
{
    int     i;
    int     j;
    int     tmp;

    i = 0;
    while ((j = 0) || i++ < size - 1)
    {
        while (j++ < size - 1)
        {
            if (tab[j - 1] > tab[j])
            {
                tmp = tab[j];
                tab[j] = tab[j - 1];
                tab[j - 1] = tmp;
            }
        }
    }
}

int     main()
{
    int		i;
	int		tab[10] = {9, 0, 8, 1, 7, 2, 6, 3, 5, 4};

	i = 0;

	ft_sort_integer_table(tab, 10);

	while (i++ < 10)
		printf("%d", tab[i - 1]);
    return 0;
}
