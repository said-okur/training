#include <unistd.h>

int ft_isthere(char *str, char c,int len)
{
    int i = 0;

    while (i < len)
    {
        if (str[i]== c)
            return 1;
        i++;
    }
    return 0;
}

int main (int argc, char *argv[])
{
    int i = 0;
    int j = 0;

    if(argc == 3)
    {
        while(argv[1][i])
        {
            while(argv[1][i] != argv[2][j])
                j++;
            if(!ft_isthere(argv[1],argv[1][i], i))
                write(1,&argv[1][i++],1);
            else
                i++;
            j = 0;
        }          
    }
    write(1,"\n",1);
}