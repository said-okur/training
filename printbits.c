#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;
    char arr[9];
    char c;

    i = 7;
    arr[8] = '\0';
    while(octet)
    {
        arr[i] = octet % 2 + '0'; 
        octet /= 2;
        i--;
    }
    while(i >= 0)
    {
        arr[i] = '0';
        i--;
    }
    i = 0;
    while(arr[i])
        write(1, &arr[i++], 1);
}

int main()
{
    print_bits(5);
    return (0);
}