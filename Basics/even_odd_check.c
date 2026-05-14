#include <stdio.h>
//Program for Odd & Even No. Check
int main() {
   int n;
   printf("Enter the Number: ");
   scanf("%d", &n);

   if (n%2==0) {
       printf("%d is a even no. \n",n);
   } else {
       printf("%d is a odd no. \n",n);
   }


    return 0;
}
