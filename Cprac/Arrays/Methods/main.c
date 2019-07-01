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

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(Array arr){
    int flag = 0;
    for(int i = 0; i < arr.len - 1; i++){
        for(int j = 1; j < arr.len - i - 1; j++){
            if(arr.A[j] > arr.A[j+1]){
                swap(&arr.A[j], &arr.A[j+1]);
            }
            flag = 1;
        }
        if (flag == 0){
            break;
        }
    }
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
    bubbleSort(arr);
    displayArray(arr);
}