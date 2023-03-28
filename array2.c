#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0;i < 5;i++){
        printf("Enter your marks\n");
        scanf("%d",&marks[i]);
    }
    printf("Your addresses are\n");
    for(int j = 0;j < 5;j++){
        printf("%u\n",&marks[j]);
    }
    return 0;
}