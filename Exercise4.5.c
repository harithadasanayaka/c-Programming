#include<stdio.h>
int main() 
{
   float a,b ;
   int c;

   printf("Enter Number 1 : \n");
   scanf("%f" ,&a);

   printf("Enter Number 2 : \n");
   scanf("%f" ,&b);

   printf("\t Mathematical Operators \n");
   printf("------------------------------------ \n");
   printf("1 - Add \n");
   printf("2 - substract \n");
   printf("3 - Multiple \n");
   printf("4 - Divide \n");
   printf("------------------------------------- \n");

   printf("Enter your preference \n");
   scanf("%d" ,&c);

switch (c)
 {
   case 1 :
     printf("Answer= %.2f\n",a+b);
     break;
   
   case 2 :
     printf("Answer =%.2f\n",a-b);
     break;
  
   case 3 :
     printf("Answer =%.2f\n",a*b);
     break;

   case 4 :
     printf("Answer =%.2f\n",a/b);
     break;
   
   default :
     printf("Incorect input\n");
  }
  









  
   

}










