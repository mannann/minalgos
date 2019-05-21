#include<stdio.h>
#include<stdlib.h>


typedef struct Array{
    int *A;
    int len, size;
}Array;


Array DefineArray(){
    Array arr;
    printf("Enter the size of array. : ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    printf("Enter the length of array : ");
    scanf("%d", &arr.len);
    printf("Enter the array elements.\n");
    for(int i = 0; i < arr.len; i++){
        printf("> ");
        scanf("%d", &arr.A[i]);
    }
    return arr;
}

void DisplayArray(Array arr){
    for(int i = 0; i < arr.len; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int main(){
    printf("Bubble Sort in C Lang.\n");
    Array arr;
    arr = DefineArray();
    DisplayArray(arr);
}