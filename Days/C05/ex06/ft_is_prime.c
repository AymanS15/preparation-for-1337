int	my_sqrt(long nb)
{
	long	sq;

	sq = 0;
	while ((sq + 1) * (sq + 1) <= nb)
		sq++;
	return ((int)sq);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sq;

	if (nb <= 1)
		return (0);
	sq = my_sqrt((long)nb);
	i = 2;
	while (i <= sq)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}