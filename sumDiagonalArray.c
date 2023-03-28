int main(){
    int a[2][2];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("Enter the value of a[%d][%d]\n",i,j);
            scanf("%d\n",&a[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            if(i == j){
                sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("the sum of all the diagonal elements is\n%d",sum);
    return 0;
}