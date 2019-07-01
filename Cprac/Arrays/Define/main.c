#include<stdio.h>
#include<stdlib.h>

typedef struct Array{
    int *A;
    int len, size;
}Array;


Array createArray(){
    Array arr;
    arr.size = 10;
    arr.len = 10;
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    printf("Enter the elements.\n");
    for(int i = 0; i < arr.len; i++){
        printf(">>> ");
        scanf("%d", &arr.A[i]);
    }
    return arr;
}

void displayArray(Array arr){
    for (int i = 0; i < arr.len; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}


int main(){
    printf("Array ADT in C Lang.\n");
    Array arr;
    arr = createArray();
    displayArray(arr);
}