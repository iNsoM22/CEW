#include <stdio.h>

int main() {
    int n;
    printf("Enter the number to print the pyramid: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=(n-i); j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++) printf("* ");
        printf("\n"); 
    }
// 2nd Approach
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=n; j++){
//             if(j<n-i) printf(" ");
//             else printf("* ");
//         }
//         printf("\n");
//     }
    
    return 0;
}

