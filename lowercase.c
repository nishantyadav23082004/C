#include<stdio.h>

int main(){
    char str1;
    printf("Enter a character\n");
    scanf("%c",&str1);

    //97-122 = a-z ASCII values
    
    if ((str1 <= 122) && (str1 >= 97)){
        printf("%c is an lowercase character",str1);
    }
    else{
        printf("%c is not lowercase character",str1);
    }
    return 0;
}