#include <unistd.h>
#include<stdio.h>
#include<string.h>
void ft_putstr(char *txt){
    while (*txt){
        write(1,txt++,1);
    }
    write(1,"\n",1);
}
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	sort_params(char **s1, char **s2)
{
	char	*tmp;

	if (ft_strcmp(*s1, *s2) <= 0)
		return ;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int main(int argc, char **argv) {
  	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
			sort_params(&argv[i], &argv[j]);
		ft_putstr(argv[i]);
	}
}
