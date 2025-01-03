#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	*arr;
//
// 	arr = ft_range(1, 10);
// 	for (int i = 0; i < 9; i++)
// 	{
// 		printf("index [%d] value = %d\n", i, arr[i]);
// 	}
// 	return (0);
// }

int	*ft_range(int min, int max)
{
	int	*tmp;
	int	i;

	i = min;
	while (i < max)
	{
		i++;
	}
	tmp = malloc(i * sizeof(int));
	i = 0;
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	return (tmp);
}
