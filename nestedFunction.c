#include<stdio.h>

void morning();
void afternoon();
void night();

int main(){
    morning();
    return 0;
}

void morning(){
    printf("Good morning\n");
    afternoon();                //Indirect function call using nested function
}
void afternoon(){
    printf("Good afternoon\n");
    night();                    //Indirect function call using nested function
}
void night(){
    printf("Good night\n");
}
