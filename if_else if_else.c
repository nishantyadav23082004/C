#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age < 18){
        printf("Your age is below 18, you can not drive");
    }
    else if(age > 80){
        printf("Your age is above 80, you can not drive");
    }
    else{
        printf("You can drive");
    }
    return 0;
}