#include<stdio.h>

int main(){
    int x = 3,y,z;
    y = x++;
    z = ++x;
    printf("x = %d\ny = %d\nz = %d\n",x,y,z);
    return 0;
}

// a++   ->  first do expression, then do the increment    ->   post-fix
// ++a   ->  first do increment,  then do the expression   ->   pre-fix