#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z') {
        printf("%c is a lowercase alphabet\n", c);
    }
    else if(c >= 'A' && c <= 'Z') {
        printf("%c is an uppercase alphabet\n", c);
    }
    else {
        printf("%c is not an alphabet\n", c);
    }
    printf("192224197");
    return 0;
}
