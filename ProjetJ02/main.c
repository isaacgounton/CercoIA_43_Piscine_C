/* login : g.isaac@groupecerco.com */

#include <stdio.h>
#include <stdlib.h>

int     main()
{

        int nbr;

        ft_ft(&nbr);
        printf("n = %d", nbr);


        int a;
        int b;

        a = 5;
        b = 10;

        ft_swap(&a, &b);
        printf("a = %d et b = %d", a, b);



    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;

    ft_div_mod(a, b, &div, &mod);
    printf("DIV = %d et MOD = %d", div, mod);




    int a;
    int b;

    a = 5;
    b = 2;

    ft_ultimate_div_mod(&a, &b);
    printf("DIV = %d et MOD = %d", a, b);


    ft_putstr("Isaac Gounton");



    char *str;

    str = "Isaac";
    printf("Nombre de caractere: %d", ft_strlen(str));




void	test(char *str)
{
	printf("\n\n//////////////////////////\n\n\n");
	printf("ft_atoi(%s) => %i\n\n", str, ft_atoi(str));
	printf("atoi(%s) => %i\n", str, atoi(str));
}

void	test1(void)
{
	char	*str;

	str = "0";
	test(str);
	str = "+0";
	test(str);
	str = "-0";
	test(str);
	str = "7";
	test(str);
	str = "07";
	test(str);
	str = "+7";
	test(str);
	str = "+07";
	test(str);
	str = "-7";
	test(str);
}

void	test2(void)
{
	char	*str;

	str = "-07";
	test(str);
	str = "42";
	test(str);
	str = "042";
	test(str);
	str = "+42";
	test(str);
	str = "+042";
	test(str);
	str = "-42";
	test(str);
	str = "-042";
	test(str);

	test1();
	test2();


	int		i;
	int		tab[10];

	i = 0;
	tab[0] = 9;
	tab[1] = 0;
	tab[2] = 8;
	tab[3] = 1;
	tab[4] = 7;
	tab[5] = 2;
	tab[6] = 6;
	tab[7] = 3;
	tab[8] = 5;
	tab[9] = 4;
	while (i++ < 10)
		printf(((i < 10) ? "%i, " : "%i\n"), tab[i - 1]);
	ft_sort_integer_table(tab, 10);
	i = 0;
	printf("\nft_sort_integer_table(tab)\n\n");
	while (i++ < 10)
		printf(((i < 10) ? "%i, " : "%i\n"), tab[i - 1]);
*/


char nom[] = "Isaac";

printf("Prenom: %s", ft_strrev(nom));
return 0;
}



