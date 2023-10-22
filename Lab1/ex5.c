#include <stdio.h>
#include <stdlib.h>

void printFib(int terms);

int main() {
    int terms;
    printf("Enter the number of terms, you want of fibonacci series: ");
    scanf("%d", &terms);
    terms > 2 ? printFib(terms) : printf("Invalid Input.");
    return 0;
}

printFib(terms) {
    int a, b, c;
    a = 0;
    b = 1;
    printf("The %d number of terms of Fibonacci series are : 0 1 ", terms);
    for(int i=1; i <= terms-2; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}
