#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	printf("ft_strdup = %s\n", ft_strdup(av[1]));
// 	return (0);
// }

char	*ft_strdup(char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!tmp)
		return (NULL);
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

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
