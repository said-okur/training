#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
        write(1,str++,1);
    return;
}

int main()
{
    ft_putstr("merhaba");
    return 0;
}