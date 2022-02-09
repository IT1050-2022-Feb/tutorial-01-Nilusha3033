/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int x,y;
  float avg;

  printf("Enter the mark for the 1subject :");
  scanf("%d", &x);

  printf("Enter the mark for the 2subject :");
  scanf("%d", &y);

  avg = (x+y)/2;

  printf("Average : %.2f", avg);

  return 0;
}

