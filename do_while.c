#include<stdio.h>

int main(){
    int i = 1;
    int num1;
    printf("Enter a number\n");
    scanf("%d",&num1);
    do{
        printf("%d\n",i);
        i++;
    }while(i <= num1);
    return 0;
}