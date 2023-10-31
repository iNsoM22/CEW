#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recurDecimalToBinary(int num) {
   if(num>=1){
    recurDecimalToBinary(num/2);
    printf("%d", num%2);
   }
}

int main() {
   int num;
   printf("Enter the number to convert it to binary: ");
   scanf("%d", &num);
   num > 0 ? recurDecimalToBinary(num) : printf("0");
   return 0;
}


void decimalToBinary(int num) {
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
