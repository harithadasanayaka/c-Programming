#include<stdio.h>
int main () 
{
    float amount,discount,final_amount;
    printf ("Enter Amount \n");
    scanf("%f" ,&amount);
    
    if (amount>=1000)
    {
      discount=amount*0.05;
      final_amount=amount-discount;
       
      printf("Discount : %.2f \n" ,discount);
      printf("Total  : %.2f \n" ,final_amount);
    }

    else
      printf("No Discount . . . \n");

return 0;

}
