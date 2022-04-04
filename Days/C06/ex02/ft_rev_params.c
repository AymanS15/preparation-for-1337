#include <unistd.h>

void putstr(char *txt){
    while (*txt){
        write(1,txt++,1);
    }
    write(1,"\n",1);
    
}
int main(int argc, char **argv) {

    for (int i = argc - 1; i >= 1; i--){
        putstr(argv[i]);
    }
    return 0;
}
