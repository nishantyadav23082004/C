#include<stdio.h>

int main(){
    int a[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("Enter the value of a[%d][%d]\n",i,j);
            scanf("%d\n",&a[i][j]);
        }
    }
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}