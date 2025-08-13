#include <stdio.h>
void factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("\nThis program is to find the factorial of a number ");
    printf("\nEnter an integer to find the factorial: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

   // return 0;
}
