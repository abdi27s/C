#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    printf("The %dth fibonacci number is %d.\n",n,fibonacci(n));
    return 0;
}

int fibonacci(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}