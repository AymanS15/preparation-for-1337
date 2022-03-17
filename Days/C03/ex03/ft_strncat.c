char *ft_strncat(char *dest, char *src,unsigned int nb){

	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest || !src){
		return (dest);
    }
	while (dest[i]){
		i++;
    }
	while (src[j] && j<nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main()
{
    char txt1[]="Ayman";
    char txt2[]="Bouabra";
    printf("%s\n",ft_strncat(txt1,txt2,3));
    return 0;
}