#include <unistd.h>

void ft_char(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    int n = nb;   
    if (nb<0){
        putchar('-');
        n=nb*-1;
    }else if (n < 10){
        ft_char(n+'0');
    }else{
        ft_putnbr(n/10);
        ft_putnbr(n%10);
    }
}