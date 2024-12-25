/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:20:55 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/07 10:14:45 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

void	ft_print_alphabet(void)
{
	char		c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}	
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
