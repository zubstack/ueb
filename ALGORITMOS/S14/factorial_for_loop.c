#include <stdio.h>

int main() {
    int N;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials

    // Input: Get the value of N
    printf("Enter a non-negative integer N: ");
    scanf("%d", &N);

    // Check if N is negative
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }

        // Output: Display the factorial
        printf("Factorial of %d: %llu\n", N, factorial);
    }

    return 0;
}
