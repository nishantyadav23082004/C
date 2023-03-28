#include<stdio.h>

int main(){
    int marks[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("Enter the value of marks[%d][%d]\n",i,j);
            scanf("%d\n",&marks[i][j]);
        }
    }
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}