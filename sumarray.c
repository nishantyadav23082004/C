#include<stdio.h>

int main(){
    int a[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("Enter the value of a[%d][%d]\n",i,j);
            scanf("%d\n",&a[i][j]);
        }
    }
    int b[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("Enter the value of b[%d][%d]\n",i,j);
            scanf("%d\n",&b[i][j]);
        }
    }
    int c[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}