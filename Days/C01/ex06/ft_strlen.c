#include <stdio.h>
#include <unistd.h>

char ft_strlen(char *str){
    int i;

    for(i=0; str[i]!='\0'; ++i);
    return i;
}