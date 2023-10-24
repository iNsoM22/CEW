#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decimalToBinary(int num);

int main() {
   int num;
   printf("Enter the number to convert it to binary: ");
   scanf("%d", &num);
   decimalToBinary(num);

   return 0;
}

decimalToBinary(num) {
    char binaryVal[64];
    int i = 0;
    if (num == 0) {
        printf("Binary: 00\n");
        return;
    }
    
    if (num == 1) {
        printf("Binary: 01\n");
        return;
    }

    while (num > 0) {
        binaryVal[i] = (num % 2) + '0';
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (i; i >= 0; i--) {
        printf("%c", binaryVal[i]);
    }
}
