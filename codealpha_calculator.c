#include<stdio.h>
#include<math.h>

void main()
{
int choise;
float num1,num2,result;
 
printf("enter the first number\n");
scanf("%f",&num1);

printf("enter the second number");
scanf("%f",&num2);

printf("select operation");
printf("\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division");
printf("enter your choise (1-4)");
scanf("%d",&choise);

switch(choise)
{
    case 1:
    result = num1 + num2;
    printf("result=%f",result);
    break;

    case 2:
    result = num1 - num2;
    printf("result=%f",result);
    break;
    
    case 3:
    result = num1 * num2;
    printf("result=%f",result);
    break;
    
    case 4:
    if(num2!= 0)
    {
    result = num1/num2;
    printf("result=%f",result);
    
    }
    else{
        printf("Division by zero is not possible.");
    }
    break;

    default:
    {
    printf("Ivalide choise");
    }

}
return 0;
}