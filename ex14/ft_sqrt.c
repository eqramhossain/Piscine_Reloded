/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:09:46 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/06 19:14:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

/*int	main(void)
{
	int	i = ft_sqrt(4);
	printf("%d\n", i);
	return (0);
}*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int main(void)
{
  int i;
}
