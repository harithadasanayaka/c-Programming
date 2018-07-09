#include<stdio.h>
int main()
{
   int a ;
do 
{
   printf("\t\tMain Menu \n");
   printf("--------------------------------------------- \n");
   printf("1 - Microsoft Word \n");
   printf("2 - Yahoo Massenger \n");
   printf("3 - Autocad \n");
   printf("4 - Java games \n");
   printf("---------------------------------------------- \n");

   printf("Enter Option : ");
   scanf("%d" ,&a);

   switch (a)
 {
   case 1 :
    printf("Personal computer software \n");
    break;
   case 2 :
    printf("web based software \n");
    break;
   case 3 :
    printf("scientific software \n");
    break;
   case 4 :
    printf("embeded software \n");
    break;
   default :
    printf("incorect \n");}
 }

while (a >0);
return 0;
}

