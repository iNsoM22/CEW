// Takes two input, If both of them are greater than 5 add them, multiply them if only one of them is greater.
// If both are less than 5, add one to both. Otherwise print Hello World.

#include <stdio.h>
#include <stdlib.h>

int main() {
   int num1, num2;
   printf("Enter the first number: ");
   scanf("%d", &num1);
   printf("\nEnter the second number: ");
   scanf("%d", &num2);
   
   if(num1 > 5 && num2 > 5) printf("%d + %d = %d", num1, num2, num1 + num2);
   else if(num1 > 5 || num2 > 5) printf("%d x %d = %d", num1, num2, num1 * num2);
   else if(num1 < 5 && num2 < 5) printf("%d and %d", num1 + 1, num2 + 1);
   else printf("Hello World");
   
   return 0;
}
