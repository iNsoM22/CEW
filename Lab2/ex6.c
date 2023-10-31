#include <stdio.h>

struct distance
{
    int feet;
    float inches;
};

int main() {
    struct distance myDistance1, myDistance2, result;
    printf("Enter the First Distance's Feets :");
    scanf("%d", &myDistance1.feet);
    printf("Enter the First Distance's Inches :");
    scanf("%f", &myDistance1.inches);
    
    printf("Enter the Second Distance's Feets :");
    scanf("%d", &myDistance2.feet);
    printf("Enter the Second Distance's Inches :");
    scanf("%f", &myDistance2.inches);
    
    result.feet = myDistance1.feet + myDistance2.feet;
    result.inches = myDistance1.inches + myDistance2.inches;
    
    if (result.inches > 12){
        result.inches -= 12;
        result.feet += 1;
    }
    printf("The added distance is %d feets and %0.1f inches.", result.feet, result.inches);

}
