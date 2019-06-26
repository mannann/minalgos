#include<stdio.h>

typedef Array{
    int *A;
    int len, size;
}Array;

Array declareArray(){
    Array arr;
    arr.size = 10;
    arr.len = 10;
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    
}

int main(){
    
}