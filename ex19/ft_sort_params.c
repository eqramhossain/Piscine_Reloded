#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
// void	ft_putchar(char c);
void	ft_swap(char **s1, char **s2);

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i != ac)
	{
		j = i + 1;
		while (j != ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	i = 0;
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
