// #include <stdio.h>
//
// int	ft_iterative_factorial(int nb);
//
// int	main(void)
// {
// 	int	i;
//
// 	i = ft_iterative_factorial(5);
// 	printf("i = %d\n", i);
// 	return (0);
// }

int	ft_iterative_factorial(int nb)
{
	int	tmp;

	tmp = nb;
	while (nb > 1)
	{
		tmp = tmp * (nb - 1);
		nb--;
	}
	return (tmp);
}
