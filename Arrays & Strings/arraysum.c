#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input Size of an Array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output result
    printf("Sum of array elements = %d", sum);

    return 0;
}