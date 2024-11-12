#include <stdio.h>
#include <stdint.h>

struct String { uint64_t length; char *contents; };
typedef struct String String;

int main() {

    int a = 0xffA1234;

    printf("%d\n", sizeof( uint64_t) );
}