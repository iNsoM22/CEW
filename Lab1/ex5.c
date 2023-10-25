#include <stdio.h>
#include <stdlib.h>

int printFib(int terms) {
    if(terms <= 1)  return 1;
    return printFib(terms - 1) + printFib(terms - 2);
}

int main() {
    int terms;
    printf("Enter the number of terms, you want of fibonacci series: ");
    scanf("%d", &terms);
    printf("The %d terms of Fibonacci series are : 0 ", terms);
    for(int i = 0; i < terms - 1; i++){
        printf("%d ", printFib(i));
    }
    return 0;
}

