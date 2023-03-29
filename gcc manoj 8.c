#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // loop through each digit of the number and add it to the sum
    for (; num != 0; num /= 10) {
        digit = num % 10; // extract the last digit
        sum += digit; // add the digit to the sum
    }
    
    printf("The sum of digits of %d is %d\n", num, sum);
    printf("\n 192224197");
    
    return 0;
}
