#include<stdio.h>
int main()
{
  int sum,num;
  printf("Enter Number : ");
  scanf("%d" ,&num);
  sum=0;
  
  for(num ;num<=100 ;num++)
  {
   sum+=num;
  }
  printf("%d \n" ,sum);
 return 0;
}
