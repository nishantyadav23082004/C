#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0;i < 5;i++){
        printf("Enter your marks\n");
        scanf("%d",&marks[i]);
    }
    printf("Your marks are\n");
    for(int j = 0;j < 5;j++){
        printf("%d\n",marks[j]);
    }
    return 0;
}