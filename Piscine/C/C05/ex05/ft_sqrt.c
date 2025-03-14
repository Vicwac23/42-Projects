int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-3));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(20));
// 	printf("%d\n", ft_sqrt(144));
// 	printf("%d\n", ft_sqrt(25));
// }
