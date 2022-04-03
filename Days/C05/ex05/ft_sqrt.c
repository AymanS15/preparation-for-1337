int	ft_sqrt(int nb)
{
	long	sq;
	long	nbr;

	if (nb < 0)
		return (0);
	nbr = (long) nb;
	sq = 0;
	while (sq * sq <= nbr)
	{
		if (sq * sq == nbr)
			return (sq);
		sq++;
	}
	return (0);
}