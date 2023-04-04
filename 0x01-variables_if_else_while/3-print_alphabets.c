#include <stdio.h>

int main() {
    int i;
    
    /* Printing lowercase alphabet*/
    for(i = 0; i < 26; i++) {
        putchar(i + 97);
    }
    
    /* Printing uppercase alphabet*/
    for(i = 0; i < 26; i++) {
        putchar(i + 65);
    }
    
    /* Printing new line*/
    putchar('\n');
    
    return 0;
}
