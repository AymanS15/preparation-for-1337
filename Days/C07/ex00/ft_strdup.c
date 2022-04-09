#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str){
    int i=0;
    while (str[i]!='\0'){
        i++;
    }
    return i;
}
char *ft_strdup(char *src){
    char    *str;
    int        i;
    i=0;
    str = malloc(ft_strlen(src)+1);
    while (src[i]!='\0'){
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
int main(){
    char txt[]="Hello World!";
    printf("%p\n",txt);
    printf("%s\n", ft_strdup(txt));
    printf("%p",ft_strdup(txt));
    return 0;
}