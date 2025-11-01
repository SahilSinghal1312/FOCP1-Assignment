#include <stdio.h>
#include <math.h>
int main() {
     int choice;
    int binaryNum, tempBinaryNum, remainder;
    int decimalNum, i, power;
    int decimalResult;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &binaryNum);
        decimalResult = 0;
        power = 0;
        tempBinaryNum = binaryNum;
        while (tempBinaryNum != 0) {
            remainder = tempBinaryNum % 10;
            decimalResult += remainder * pow(2, power);
            tempBinaryNum /= 10;
            power++;
        }
        printf("Decimal equivalent: %d\n", decimalResult);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimalNum);
        int binaryResult = 0;
        int multiplier = 1;
        if (decimalNum == 0) {
            printf("Binary equivalent: 0\n");
        } else {
            while (decimalNum > 0) {
                remainder = decimalNum % 2;
                binaryResult += remainder * multiplier;
                decimalNum /= 2;
                multiplier *= 10;
            }
            printf("Binary equivalent: %d\n", binaryResult);
        }
    } else {
        printf("Invalid choice.\n");
    }


    return 0;
}