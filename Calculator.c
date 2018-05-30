#include<stdio.h>

#include<conio.h>

int main()

{

   int n,num1,num2,result;

   char option;

   do
 
      {

    printf("\nWhat operation do you want to perform?\n");

    printf("Press 1 for the Addition\n");

    printf("Press 2 for the Subtraction\n");
 
    printf("Press 3 for the Multiplication\n");

    printf("Press 4 for the division\n");

    scanf("%d",&n);

    printf("Please enter a number\n");

    scanf("%d",&num1);

    printf("Please enter a second number\n");

    scanf("%d",&num2);

    switch(n)

    {

      case 1:result=num1+num2;

             printf("Addition of two number is %d",result);

             break;

      case 2:result=num1-num2;

             printf("Subtraction of two number is %d",result);

             break;

      case 3:result=num1*num2;

             printf("Multiplication of two number is %d",result);

             break;
     
      case 4:result=num1/num2;

             printf("Division of two number is %d",result);

             break;

      default:printf("wrong input");

    }

    printf("\ndo you want to continue y/n?\n");

    option=getch();

   }

   while(option=='y');

   getch();

   return 0;

} 