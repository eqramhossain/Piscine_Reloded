/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:12:23 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/07 10:17:11 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

/*int	main(void)
{
	char	str[] = "a;sdlkfja;sldkjf;alskjdf;laskjdf";
	ft_putstr(str);
	return (0);
}*/

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

int	hello(void)
{
	int	i;

	i = 0;
}
