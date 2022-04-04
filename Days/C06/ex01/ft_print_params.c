#include <unistd.h>

void putstr(char *txt){
    while (*txt){
        write(1,txt++,1);
    }
    write(1,"\n",1);
    
}
int main(int argc, char **argv) {
    int i=1;

    while (i < argc){
        putstr(argv[i]);
        i++;
    }
    return 0;
}
