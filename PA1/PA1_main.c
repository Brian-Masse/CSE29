#include <stdint.h>
#include <stdio.h>

// MARK: Helper Functions
int8_t is_char_ascii(char c) {
    return c > 0;
}

int8_t uppercase_ascii(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
        return 1;
    }
    return 0;
}

// MARK: is_ASCII
int32_t is_ascii(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (!is_char_ascii(str[i])) { return 0; }
        i += 1;
    }

    return 1;
}


// MARK: Capitalize_ASCII
int32_t capitalize_ascii(char str[]) {
    int i = 0;
    int changed = 0;

    while (str[i] != '\0') {
        changed += uppercase_ascii(&str[i]);
        i += 1;
    }

    return changed;
}

// MARK: Width_from_start_byte
int32_t width_from_start_byte(char start_byte) {

    unsigned char u_char = (start_byte);
    int increment = 1;
    int width = 0;
    
    while (increment < 16 ) {
        char mask = increment * 16;

        if ( (u_char & mask) != 0) { width += 1; }
        
        increment *= 2;
    }

    return width;
}

int main () {

    char str[] = "abcd";

    // printf( "test: %d\n", is_ascii(str) );

    // int capitalized_chars = capitalize_ascii(str);

    // printf( "capitalized_str: %s, changed_chars: %d\n", str, capitalized_chars );


char s[] = "H🦬y"; // same as { 'H', 0xC3, 0xA9, 'y', 0 },   é is start byte + 1 cont. byte
printf("Width: %d bytes\n", width_from_start_byte(s[1] )); // start byte 0xC3 indicates 2-byte

}