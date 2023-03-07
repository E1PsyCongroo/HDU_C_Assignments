#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  char ch = 0;
  int sum_other = 0; // other char
  int sum_space = 0; // space char ' '、'  '
  int sum_enter = 0; // enter char '\n'
  printf("Please Enter the string (# to quit)\n"); // # to quit
  /*
    your codes here
  */
  printf("space = %d,enter = %d,other = %d\n", sum_space, sum_enter, sum_other);  
  return EXIT_SUCCESS;
}
