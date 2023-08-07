
unsigned char	swap_bits(unsigned char octet)
{
    int i = 7;
    char bits[] = "00000000";

    while(octet || i)
    {
        bits[i--]=octet%2;
        octet /= 2;
        if(!octet)
            bits[i] = '0';
    }
    while(i)

}