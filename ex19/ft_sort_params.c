/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:21:59 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/06 19:19:49 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_params(int argc, char *argv[]);
char	ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int ac, char *av[])
{
	int		i;
	char	**params;

	i = 1;
	params = ft_sort_params(ac, av);
	while (i < ac)
	{
		ft_putstr(params[i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}

char	**ft_sort_params(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (av);
}

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
