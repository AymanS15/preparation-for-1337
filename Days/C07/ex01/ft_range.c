#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min,int max){
    int    *range;
    int    i;

    if (min >= max){
        return (0);
    }
    range = malloc((max - min) * 4 + 1);
    i = 0;
    while (min < max){
        range[i++] = min++;
    }
    range[i]='\0';
    return (range);
}
int main(){
    int x=0,min,max;
    int p;
    min=8;
    max=9;
    p=ft_range(min,max);
    while(x<max-min){
        printf("%d",ft_range(min,max)+x);
        x++;}
    return 0;
}