#include <stdio.h>

int main() {
    int num, count=0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;   // remove the rightmost digit
        count++;     // increment the count
    }

    printf("Number of digits: %d", count);
    printf("\n h192224197");
    return 0;
}
