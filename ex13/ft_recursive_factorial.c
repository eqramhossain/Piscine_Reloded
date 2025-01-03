#include <stdio.h>

// int	ft_iterative_factorial(int nb);
//
// int	main(void)
// {
// 	int	i;
//
// 	i = ft_iterative_factorial(5);
// 	printf("i = %d\n", i);
// }

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb > 1)
		tmp = tmp * ft_iterative_factorial(nb - 1);
	return (tmp);
}
