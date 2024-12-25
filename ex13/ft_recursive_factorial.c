/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:44:32 by ehossain          #+#    #+#             */
/*   Updated: 2024/12/25 18:26:30 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_recursive_factorial(int nb);
//
// int	main(void)
// {
// 	int	i;
//
// 	i = ft_recursive_factorial(12);
// 	printf("%d\n", i);
// 	return (0);
// }

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb > 12)
		return (0);
	if (nb != 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
