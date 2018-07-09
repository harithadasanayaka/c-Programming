#include<stdio.h>
int main() 
{
    int marks;
    printf("Enter Marks : \n");
    scanf("%d" ,&marks);

    if(marks >=50)
      {
       printf("you have pass the exam !\n");
      }

    if (marks <50)
       {
         printf("You are fail ! \n");
        }
  return 0;


}
