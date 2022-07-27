#include<stdio.h>
// Add function
float add(float a, float b)
{
    return a + b;
}
// Substract function
float substract(float a, float b)
{
    return a - b;
}
// Multiply functions
float multiply(float a, float b)
{
    return a * b;
}
//Divide Function 
float divide(float a, float b)
{
    return a / b;
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
        case '-': 
                result = substract(num1,num2);
                printf("%.2f - %.2f = %.2f\n",num1,num2,result);
                break;
        case '*':
                result = multiply(num1,num2);
                printf("%.2f * %.2f = %.2f\n",num1,num2,result);
                break;
        case '/':
                result = divide(num1,num2);
                printf("%.2f / %.2f = %.2f\n",num1,num2,result);
                break;
        default:
                printf("Invalid operator\n");
                break;
    }
    return 0;
}