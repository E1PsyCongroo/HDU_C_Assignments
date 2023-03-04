#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int  magic;
  int  guess;
  int  counter = 0;
  srand(time(0));    //这是什么？也许你需要搜索一下rand()函数的具体用法。
  magic = rand() % 100 + 1;
  /*  
       
    Your codes here
       
  */

  printf("Right!\n");

  printf("counter = %d\n", counter);
  return EXIT_SUCCESS;
}
