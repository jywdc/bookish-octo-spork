#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t a = 0xFF, b = 0xFF;
    uint64_t c = 0;

    c = ((a & 0x01) << 8 ) | b;

    printf("%lx\n", c);
    return 0;
}