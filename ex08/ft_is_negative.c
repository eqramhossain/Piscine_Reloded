/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:31:03 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/07 10:16:27 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

/*int	main(void)
{
	ft_is_negative(-7);
	return (0);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
		ft_putchar('P');
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
