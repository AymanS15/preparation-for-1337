#include <unistd.h>


int	main(){
    char txt[]="Hello world!";
	write(1, &txt, 13);
	return (0);
}
