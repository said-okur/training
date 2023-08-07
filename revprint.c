#include <unistd.h>

void ft_revprint(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    
    while(i)
        write(1,&str[--i],1);
    return;
}

int main(int argc, char *argv[])
{
    if(argc == 2)
        ft_revprint(argv[1]);
    write(1,"\n",1);
    return 0;
}