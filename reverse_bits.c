#include <stdio.h>

unsigned char reverse_bits(unsigned char byte) // 00000010
{
    unsigned char result = 0; // Sonuç değişkeni, başlangıçta 0 olarak ayarlanır.
    int bit_pos = 7; // 7'den başlayarak, 0'a kadar olan bit pozisyonlarına erişeceğiz.

    while (bit_pos >= 0)
    {
        result = result << 1; // Sonuç değişkenini sola doğru bir bit kaydırır.
        
        if (byte & 1) // Mevcut bit 1 ise (en sağdaki bit)
            result = result | 1; // Sonuç değişkeninin en sağdaki bitini 1 yapar.
        
        byte = byte >> 1; // İşlenen byte'ın bitlerini sağa doğru bir bit kaydırır.
        bit_pos--; // Bit pozisyonunu bir azaltır, bir sonraki biti işlemek için hazırlanır.
    }

    return result; // Sonuç değişkenini tersine çevrilmiş bitlerle döndürür.
}

int main()
{
    unsigned char num = 0b10000011; // 10000011 (binary)
    unsigned char reversed = reverse_bits(num); // 11000001 (binary)

    printf("Original: %d\n", num);
    printf("Reversed: %d\n", reversed);

    return 0;
}
