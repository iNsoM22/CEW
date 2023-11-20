#include<stdio.h>
#include<stdlib.h>

void swapVal(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Swapped Values");
}

int main() {
    char a, b;
    printf("Enter the First Element: ");
    scanf(" %c", &a);
    printf("Enter the Second Element: ");
    scanf(" %c", &b);
    printf("A = %c and B = %c\n", a, b);
    swapVal(&a, &b);
    printf("A = %c and B = %c\n", a, b);
    return 0;
}
