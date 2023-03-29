#include <stdio.h>

int main() {
    int num, rev_num = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
    }

    printf("Reverse of the given number is: %d", rev_num);
    printf("\n 192224197");
    return 0;
}
