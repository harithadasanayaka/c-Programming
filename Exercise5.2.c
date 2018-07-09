#include<stdio.h>
int main()
{
 int num,sum ;
 sum=0;

 for (num=1 ;num<=100 ;(num+= 2))
 {
  sum+=num;
 }
 
 printf("%d \n" ,sum);
 return 0;

}
