#include<stdio.h>

int main(){
    float num1;
    float num2;
    printf("Enter a number\n");
    scanf("%f",&num1);
    printf("Enter a number\n");
    scanf("%f",&num2);
    printf("The average of %f and %f is = %f",num1,num2,(num1+num2)/2);
}