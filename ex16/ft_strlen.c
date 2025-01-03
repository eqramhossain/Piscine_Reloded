// #include <stdio.h>
//
// int	ft_strlen(char *str);
//
// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	printf("ft_strlen = %d\n", ft_strlen(av[1]));
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
