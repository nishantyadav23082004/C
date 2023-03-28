#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0;i < 5;i++){
        printf("Enter your marks\n");
        scanf("%d",&marks[i]);
    }
    int choice;
    while(choice != 1){
        printf("Enter the element to be searched\n");
        printf("Enter 1 to exit\n");
        scanf("%d\n",&choice);
        while(1){
            if(choice == marks[0]){
                printf("element found at index 0\n");
                break;
            }
            else if(choice == marks[1]){
                printf("element found at index 1\n");
                break;
            }
            else if(choice == marks[2]){
                printf("element found at index 2\n");
                break;
            }
            else if(choice == marks[3]){
                printf("element found at index 3\n");
                break;
            }
            else if(choice == marks[4]){
                printf("element found at index 4\n");
                break;
            }
            else{
                printf("element not found!!!!!\n");
                break;
            }
        }
    }
    return 0;
}