#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main( int argc, char** argv ) {

    char byte1 = 0b11001110;
    char byte2 = 0b10101001;

    char test[3] = { byte1, byte2, '\0' };

    int16_t num = 937;

    int16_t first_mask      = 0x001F;
    char char1              = ((num >> 6) & first_mask) + 0xc0;

    int16_t second_mask     = 0x003F;
    char char2              = (num & second_mask) + 0x80;

    char unicode_str[3] = { char1, char2, '\0' };

    printf( "from string: %s\n", test);
    printf( "from string: %s\n", unicode_str);
}