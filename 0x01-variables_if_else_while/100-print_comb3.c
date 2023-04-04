#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');
            if(i < 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}
