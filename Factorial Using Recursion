#include <stdio.h>

int fact(int n);

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}


int fact(int n) {
    if(n == 0) 
return 1;
int factNm1 = fact(n-1);
int factN = n * factNm1;
    return factN;
}

