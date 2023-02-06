#include<stdio.h>

int main(){
    int factorial = 1;
    int num1;
    printf("Enter a number\n");
    scanf("%d",&num1);
    for(int i = 1 ; i <= num1 ; i++){
        factorial *= i;
    }
    printf("factorial of %d is %d",num1,factorial);
    return 0;
}