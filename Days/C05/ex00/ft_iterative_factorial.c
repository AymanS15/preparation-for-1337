int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb <= 0)
		return (nb == 0);
	res = 1;
	i = 1;
	while (i <= nb)
		res *= i++;
	return (res);
}