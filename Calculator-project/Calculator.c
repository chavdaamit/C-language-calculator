#include <stdio.h>


int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }
float div(int a, int b){ return (float)a / b; }
int mod(int a, int b){ return a % b; }


int main(){

int choice, a, b;


while(1){

printf("\npress 1 for +");
printf("\npress 2 for -");
printf("\npress 3 for *");
printf("\npress 4 for /");
printf("\npress 5 for %%");
printf("\npress 0 for Exit");

printf("\nEnter your Choice");
scanf("%d",&choice);

if(choice ==0)
break;

printf("Enter Frist number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);



switch(choice){
            case 1:
                printf("Addition = %d", add(a,b));
                break;
            case 2:
                printf("Subtraction = %d", sub(a,b));
                break;
            case 3:
                printf("Multiplication = %d", mul(a,b));
                break;
            case 4:
                printf("Division = %.2f", div(a,b));
                break;
            case 5:
                printf("Modulus = %d", mod(a,b));
                break;
            default:
                printf("Invalid Choice");
        }






}



    return 0;
}