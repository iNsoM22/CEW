#include <stdio.h>
#include <ctype.h>

int main() {
    char string[1024];
    printf("Enter the sentence: ");
    gets(string);
    for(int i=0; i<sizeof(string)/sizeof(string[0]); i++){
        if(islower(string[i])) string[i] = toupper(string[i]);
        else if(isupper(string[i])) string[i] = tolower(string[i]);
    }

    printf("Modified Sentence: %s", string);
    return 0;
}
