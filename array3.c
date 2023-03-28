#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0;i < 5;i++){
        printf("Enter your marks\n");
        scanf("%d",&marks[i]);
    }
    int j = 0;
    while(j < 5){   
        printf("Enter the index\n");
        scanf("%d\n",&j);
    }
    return 0;
}