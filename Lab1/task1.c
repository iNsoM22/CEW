// Takes a number from the user as input, and print its table if the number is positive.

#include <stdio.h>

void printTable(int num);

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   num > 0 ? printTable(num) : printf("Number is negative.");
   return 0;
}

printTable(num) {
    for(int i=1; i<=10; i++) printf("%d x %d = %d \n", num, i, num*i);
}
