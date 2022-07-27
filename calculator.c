#include<stdio.h>
// Add function
float add(float a, float b)
{
    return a + b;
}

int main(){
    float num1,num2,result;
    char op;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            result = add(num1,num2);
            printf("%.2f + %.2f = %.2f\n",num1,num2,result);
            break;
    }
    return 0;
}