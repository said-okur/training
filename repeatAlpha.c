#include <unistd.h>

void ft_repeatAlpha(char *str)
{
    int i = 0;
    int l = 96;
    int u = 64;

    while(str[i])
    {
        if(str[i] >= 'a' &&  str[i] <='z' || str[i] >= 'A' &&  str[i] <='Z')
        {
            if(str[i] >= 'a' &&  str[i] <='z')
            {
                while(l++ != str[i])
                    write(1,&str[i],1);
            }
            else if (str[i] >= 'A' &&  str[i] <='Z')
            {
                while(u++ != str[i])
                    write(1,&str[i],1);
            }
        l = 96;
        u = 64;
        }
        else
            write(1,&str[i],1);
        i++;
    }
    write(1,"\n",1);
    return;
}

int main (int argc, char *argv[])
{
    if(argc == 2)
    {
        ft_repeatAlpha(argv[1]);
        return 0;
    }
    write(1,"\n",1);
    return 0;
}