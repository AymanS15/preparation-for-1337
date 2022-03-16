#include <unistd.h>

void *maff_alpha(char *str){

   int i=0;

    while (str[i]!='\0'){
        if (str[i] >='a' && str[i] <='z' || str[i] >='A' && str[i] <='Z' || str[i] =='\0'){
            if (str[i] >='A' && str[i] <='Z' ){
                str[i] = str[i] +32;
            }
            else if (i % 2 ==1){
                str[i] = str[i] -32;
                write(1,&str[i],1);
            }else if (i%2==0){
                write(1,&str[i],1);
            }
        }else{
            write(1,&str[i],1);
        }
        i++; 
    }
}
int main()
{
    char txt[]="abcdefghejklmnoparstuvwxyz";
    maff_alpha(txt);
    return 0;
}
