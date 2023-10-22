#include <stdio.h>
#include <stdlib.h>

int main() {
    float height, width, area, perimeter;
    printf("Enter the height of rectangle: ");
    scanf("%f", &height);
    printf("\nEnter the width of rectangle: ");
    scanf("%f", &width);
    perimeter = 2*(height + width); 
    area = height*width; 
    printf("The Perimeter of Rectangle is %.2f", perimeter);
    printf("\nThe area of Rectangle is %.2f", area);
    return 0;
}    
