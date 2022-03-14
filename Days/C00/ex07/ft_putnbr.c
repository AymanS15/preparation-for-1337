#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putnbr(int n){

    if (n<0){

        ft_putchar('-');
        n *= -1;
        ft_putchar(n+'0');

    }else if (n<10){
        ft_putchar((n%10)+'0');
    }

    else if (n>=10)
    {
        ft_putnbr(n/10);
        ft_putnbr(n%10);
    }

    else{
        n=n+48;
    }
}

int main () {

    ft_putnbr(69420);
    return 0;
}