#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reversal(char *str) {
    char *startPtr, *endPtr, *temp;
    int length;
    length = strlen(str) - 1;
    startPtr = str;
    endPtr = str + length;
    for(int i=0; startPtr < endPtr ; i++){
        temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        startPtr++;
        endPtr--;
    }
}
int main() {
    char a[1000];
    printf("Enter the String: ");
    fgets(a, 1000, stdin);
    reversal(a);
    printf("Reversed Sentence: %s", a);
    return 0;
}
