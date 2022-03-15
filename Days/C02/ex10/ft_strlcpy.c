unsigned int ft_strlcpy(char *dest, char *src,unsigned int size){

	int	i=0;
	
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);

}