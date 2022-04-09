#include <stdlib.h>
#include <stdio.h>
int *ft_ultimate_range(int **range,int min,int max){
    int    *rang;
    int    i;
    int size;

    if (min >= max){
        return (0);
    }
    rang = malloc((max - min) * 4 + 1);
    i = 0;
    while (min < max){
        rang[i++] = min++;
    }
    rang[i]='\0';
    size = i;
    *range=rang;
    return (size);
}
int main(){
    int x=0,min,max;
    int p;
    min=1;
    max=9;
    int *tab;
    p=ft_ultimate_range(&tab,min,max);
    while(x<p){
        printf("%d",tab[x]);
        x++;
        }
    return 0;
}