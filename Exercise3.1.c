#include <stdio.h>
int main()
{
  int  a,b,sum1,sum2;
  a = b = 2 ;
  sum1 = a + (++b);
  sum2 = a + (b++);

  printf("sum1 : %d\n", sum1);
  printf("sum2 ; %d\n", sum2);

  return 0;
}
