#include <stdio.h>
#include <stdlib.h>

int main() {
    float height;
    printf("Enter your height in centimeters: /n");
    scanf("%f", &height);
    if(height < 150) printf("Dwarf");
    else if(height == 150) printf("Average");
    else if(height >= 165) printf("Tall"); 
    else printf("Please enter the correct height"); 
    return 0;
}    
