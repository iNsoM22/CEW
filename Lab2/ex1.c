#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    // Using For Loop..
    for(int i=0; i<n; i++){
        sum += i;
        printf("%d ", i);
    }
    // Using While Loop..
    int j=0;
    while(j<n){
        sum += j;
        printf("%d ", j);
        j++;
    }
    
    // Using Do While;
    int k=0;
    do{
        sum += k;
        printf("%d ", k);
        k++;
    }
    while(k<n);
    printf("The Sum is %d.", sum);
    return 0;
}
