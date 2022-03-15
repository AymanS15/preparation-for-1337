void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}
void ft_putstr_non_printable(char *str){

    int i=0;

    while (str[i]){
        if (str[i] >=' ' && str[i] <='~' || str[i] =='\0'){
            
            write(1,&str[i],1);
            
        }else{
            ft_putchar('\\');
			ft_puthex(str[i]);
            
        } 
        i++;
    }
}