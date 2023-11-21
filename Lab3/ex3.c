#include<stdio.h>
#include<stdlib.h>
#define MAX_LENGTH 100

int main() {
    int array[MAX_LENGTH], size;
    int *ptr = array;
    printf("Enter the Array Size: ");
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        printf("Enter the %d element: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = array;
    printf("Array Elements: ");
    for(int i=0; i<size; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
