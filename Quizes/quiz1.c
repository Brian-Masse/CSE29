#include <stdio.h>

int8_t check_is_hex( char c ) {
    if ( c >= 'a' && c <= 'f' ) { return c - 87; }
    if ( c >= 'A' && c <= 'F' ) { return c - 55; }
    if ( c >= '0' && c <= '9' ) { return c - 48; }
    return -1;
}

void read_hex( char str[] ) {

    int32_t i = 0;

    while ( str[i] != '\0' ) {
        
        int8_t val = check_is_hex(str[i]);

        if (val != -1) { printf( "%d ", val ); }

        i += 1;
    }
}

void parse_hex( char str[] ) {
    int32_t i = 0;

    while ( str[i] != '\0' ) {
        
        int8_t val = check_is_hex(str[i]);

        if (val != -1) {

            int8_t b2 = check_is_hex(str[i + 1]);
            char c = val * 16 + b2;

            printf("%c", c);

            i += 1;
        }
        
        i += 1;
    }
}

int main() {

    //48 656C 6C _6F 21

    char str[100];

    printf("input string: ");

    scanf("%[^\n]", str);

    parse_hex(str);

}