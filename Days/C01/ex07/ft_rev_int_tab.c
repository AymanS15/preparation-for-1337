#include <stdio.h>
#include <stdlib.h>

void    ft_rev_int_tab(int *tab, int size){
	int	i;
	int	tmp;

	i = -1;
	while (++i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
	}
}