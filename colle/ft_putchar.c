/* login : g.isaac@groupecerco.com */

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

