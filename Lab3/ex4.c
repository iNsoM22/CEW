#include<stdio.h>
#include<stdlib.h>

int search(int *ptr, int val){
    int *temp = ptr;
    for(int i=0; i < sizeof(ptr)/sizeof(*ptr); i++){
        if(*ptr == val) return i;
    }
    return -1;
}

int main() {
    int array[4] = {2,3,4,5};
    int indice;
    indice = search(array, 32);  
    printf("Value is at %d.", indice);
    return 0;
    
}
