#include <stdio.h>

int main() {
    int i;
    char hex_digits[] = "0123456789abcdef";
    for(i = 0; i < 16; i++) {
        putchar(hex_digits[i]);
    }
    putchar('\n');
    return 0;
}
