/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:05:36 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:29 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 100;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	return (0);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
