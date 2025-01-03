#include <unistd.h>

void	ft_putstr(char *str);
/* void	ft_putchar(char c); */

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i != ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return ;
// }
