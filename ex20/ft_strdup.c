/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:31:25 by ehossain          #+#    #+#             */
/*   Updated: 2024/11/06 19:20:48 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *src);

/*int	main(void)
{
	char	src[] = "hello world";
	char	*ptr = ft_strdup(src);
	printf("%s\n", ptr);
	return (0);
}*/

char	*ft_strdup(char *src)
{
	int		i;
	int		srclen;
	char	*ptr;

	i = 0;
	srclen = ft_strlen(src);
	ptr = malloc(sizeof(char) * srclen + 1);
	if (ptr == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_strlen(char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
