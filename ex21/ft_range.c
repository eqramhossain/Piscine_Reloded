/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:16:41 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/07 10:29:54 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

/*int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	rest;

	min = -2;
	max = 20;
	i = 0;
	rest = max - min;
	int	*ptr = ft_range(min, max);
	while (i != rest)
	{
		printf("%d\n", ptr[i]);
		i++;
		min++;
	}
	return (0);
}*/

int	*ft_range(int min, int max)
{
	int	i;
	int	length;
	int	*ptr;

	i = 0;
	length = max - min;
	if (min >= max)
	{
		ptr = NULL;
		return (0);
	}
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
	{
		return (0);
	}
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
