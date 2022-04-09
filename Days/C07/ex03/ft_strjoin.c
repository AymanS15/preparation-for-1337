#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int limit(int size, char **strs, char *sep)
{
        int i = 0;
        int j = 0;
        int lim = 0;
        while(size>i)
        {
                while(strs[i][j] != '\0')
                {
                        lim++;
                        j++;
                }
                j=0;
                i++;
        }
        i = 0;
        while(sep[i] != '\0')
        {
                i++;
        }
        lim = lim + (i*size);
        return lim;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
        char *join;
        int j = 0;
        int i = 0;
        int d = 0;
        int lim = limit(size,strs,sep);
        join = malloc(lim);
        while(size>i)
        {
                while(strs[i][j] != '\0')
                {
                        join[d] = strs[i][j];
                        j++;
                        d++;
                }
                j = 0;
                while(sep[j] != '\0' && size-1>i)
                {
                        join[d] = sep[j];
                        j++;
                        d++;
                }
                j=0;
                i++;
        }
        //printf("%d\n",lim);
        join[d]= '\0';
        return join;

}
int main()
{
        char sep[1] = "\n";
        char **strs = malloc(sizeof(char *)*3);
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 5 + 1);
        strs[0] = "Welcome to casablanca";
        strs[1] = "Welcome to London";
        strs[2] = "Welcome to Moscow";
        int size = 3;
        char * a= ft_strjoin(size, strs, sep);
        printf("%s",a);
        return 0;
}