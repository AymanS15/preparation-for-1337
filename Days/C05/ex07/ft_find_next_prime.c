int	my_sqrt(long nb)
{
	long	sq;

	sq = 0;
	while ((sq + 1) * (sq + 1) <= nb)
		sq++;
	return ((int)sq);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	sq;

	if (nb <= 2)
		return (2);
	sq = my_sqrt((long)nb);
	i = 2;
	while (i <= sq)
	{
		if (nb % i++ == 0)
			return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}