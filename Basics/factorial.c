#include <stdio.h>
//Program to find factorial
int main() {
    int n;
    printf("Enter the no. ");
    scanf("%d", &n);

int fact=1;
    for (int i=1; i<=n; i++) {
    fact = fact * i;
    }
    printf("The factorial of the no. is : %d \n", fact);
}
