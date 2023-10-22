#include<stdio.h>
#include<stdlib.h>

int main() {
    int id, amount;
    float workhours, salary;
    printf("Enter your ID:");
    scanf("%d",& id);
    printf("\nEnter the total hours you worked:");
    scanf("%f", &workhours);
    printf("\nEnter your hourly wage:");
    scanf("%d", &amount);
    salary = workhours*amount; 
    printf("\nThe ID of employee is %d", id);
    printf("\nAnd His Salary is %.2f", salary);
    return 0;
}    
