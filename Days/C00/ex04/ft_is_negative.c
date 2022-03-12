#include <stdio.h>
#include <unistd.h>


int ft_print_numbers(int a){
    
    char p = 'P';
    char n = 'N';

    if (a<0){

        write(1,&n,1);
    }else {
    
         write(2,&p,1);
    
    }     
}

int main (){

    ft_print_numbers(69);
    return 0;
}