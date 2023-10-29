#include <stdio.h>

int main() {
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &array[i]);
    }
    printf("These are the unique elements : ");
    for(int i=0; i<size; i++) {
        int count = 0, elem = array[i];
        for(int j=0; j<size; j++){
            if(elem == array[j]) count++;
        }
        if(count == 1) printf("%d ", elem);
    }
    return 0;
}
