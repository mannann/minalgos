#include<stdio.h>
#include<stdlib.h>

int FactorialRecursion(int n){
    if(n == 0){
        return 1;
    }else{
        return FactorialRecursion(n - 1) * n;
    }
}

int FactorialLoop(int n){
    int sum = 1;
    if(n == 0){
        return 0;
    }
    for(int i = 1; i <= n; i++){
        sum = sum * i;
    }
    return sum;
}

int main(){
    printf("Factorial using Recursion.\n");
    int x = 10;
    int res1 = FactorialRecursion(x);
    printf("%d is the factorial for %d", res1, x);
    printf("\n");
    int res2 = FactorialLoop(x);
    printf("%d is the factorial for %d", res2, x);
    printf("\n");
}