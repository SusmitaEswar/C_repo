// Write a program to enter two numbers and display the greater number
#include<stdio.h>

void biggest2()
{
  int num1, num2;
  printf ("\n This program shows biggest of 2 numbers")
  printf ("\nEnter two numbers: ");
  scanf ("%d %d", &num1, &num2);
 
  if (num1 == num2)
      printf("both are equal");
  else if (num1 > num2)
      printf("%d is greater", num1);
  else
      printf("%d is greater", num2);

 // return 0;
}
