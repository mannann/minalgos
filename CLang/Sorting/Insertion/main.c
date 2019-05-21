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

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(Array arr){
    int i, j ,x;
    for (i = 1; i < arr.len; i++){
        j = i - 1;
        x = arr.A[i];
        while(j > -1 && arr.A[j] > x){
            arr.A[j+1] = arr.A[j];
            j--;
        }
        arr.A[j+1] = x;
    }
}

int main(){
    printf("Bubble Sort in C Lang.\n");
    Array arr;
    arr = DefineArray();
    DisplayArray(arr);
    InsertionSort(arr);
    DisplayArray(arr);
}