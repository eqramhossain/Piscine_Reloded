/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:37:25 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/06 19:18:33 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (ac != 1)
	{
		ft_putstr(av[i]);
		ac--;
		i++;
		ft_putchar('\n');
	}
	return (0);
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
