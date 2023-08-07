#include <unistd.h>

void    ft_rot13(char *str)
{
    int i = 0;
    char c;
    
    while(str[i])
    {
        if((str[i] >= 'a' &&  str[i] <= 'z') || (str[i] >= 'A' &&  str[i] <='Z'))
        {
            if (str[i] >= 'a' &&  str[i] <='m')
            { 
                c = str[i]+13;
                write(1,&c,1);
            }
            else if (str[i] >= 'n' &&  str[i] <='z')
            { 
                c = str[i]-13;
                write(1,&c,1);
            }
            else if (str[i] >= 'A' &&  str[i] <='M')
            { 
                c = str[i];
                c = c + 13;
                write(1,&c,1);
            }
            else if (str[i] >= 'N' &&  str[i] <='Z')
            { 
                c = str[i]-13;
                write(1,&c,1);
            }
        }
        else
            write(1,&str[i],1);
        i++;
    }


}

int main (int argc, char *argv[])
{
    if(argc == 2)
    {
        ft_rot13(argv[1]);
        return 0;
    }
    write(1,"\n",1);
    return 0;
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/ 