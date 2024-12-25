/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:56:38 by ehossain          #+#    #+#             */
/*   Updated: 2024/12/25 18:03:09 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_iterative_factorial(int nb);
//
// int	main(void)
// {
// 	int	i;
//
// 	i = ft_iterative_factorial(12);
// 	printf("%d", i);
// 	return (0);
// }

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
