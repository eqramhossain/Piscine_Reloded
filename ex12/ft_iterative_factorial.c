#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
