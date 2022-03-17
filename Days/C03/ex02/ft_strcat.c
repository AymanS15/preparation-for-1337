char *ft_strcat(char *dest, char *src){

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
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}