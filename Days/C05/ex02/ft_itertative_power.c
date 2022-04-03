int	ft_itertative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power <= 0)
		return (power == 0);
	res = nb;
	i = 0;
	while (++i < power)
		res *= nb;
	return (res);
}