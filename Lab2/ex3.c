#include <stdio.h>

int stringChecker(char *a, char *b){
    int i=0;
    while (a[i] && b[i]) {
        if(a[i] != b[i]) return 0;
        i++;
    }
    return 1;
}

int main() {
    int i=0;
    char str1[1024], str2[1024];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    stringChecker(str1, str2) ? printf("\nStrings are Same.") : printf("Strings are not same.");
    return 0;
}
