#include<stdio.h>

int main(){
    int marks[3][2];
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 2 ; j++){
            printf("Enter the marks of student %d in subject %d\n",i + 1,j + 1);
            scanf("%d",&marks[i][j]);            
    }        
    }
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 2 ; j++){
            printf("The marks of student %d in subject %d is %d\n",i + 1,j + 1,marks[i][j]);      
    } 
    }
    return 0;
}