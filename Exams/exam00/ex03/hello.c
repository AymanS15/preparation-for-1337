#include <unistd.h>


int	main(){
    char txt[]="Hello world!";
	write(1, &txt, 1);
	return (0);
}
