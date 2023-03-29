#include <stdio.h>

int main() {
    int decimalNum, binaryNum[32], i = 0;

    // Take input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    // Print the binary number
    printf("Binary number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("192224197");
    return 0;
}
