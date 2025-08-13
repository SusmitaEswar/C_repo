#include <stdio.h>
void sum2() {    

    int number1, number2, sum;
    printf("\nthis program finds the sum of 2 numbers ");    
    printf("\nEnter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("\n%d + %d = %d", number1, number2, sum);
   // return 0;
}
