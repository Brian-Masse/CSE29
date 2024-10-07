#include <stdint.h>
#include <stdio.h>

int8_t is_char_ascii(char c) {
    return c > 0;
}

int32_t is_ascii(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (!is_char_ascii(str[i])) { return 0; }
        i += 1;
    }

    return 1;
}

int main () {

    char str[] = "Hello world with ASCII chars🦬";

    printf( "test: %d\n", is_ascii(str) );
}