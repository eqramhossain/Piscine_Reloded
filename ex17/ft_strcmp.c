// #include <stdio.h>
// #include <string.h>
//
// int	ft_strcmp(char *s1, char *s2);
//
// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	printf("ft_strcmp = %d\n", ft_strcmp(av[1], av[2]));
// 	printf("ft_strcmp = %d\n", strcmp(av[1], av[2]));
// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
