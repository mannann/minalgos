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

void BubbleSort(Array arr){
    int flag;
    for(int i = 0; i < arr.len; i++){
        flag = 0;
        for(int j = 0; j < arr.len - i - 1; j++){
            if(arr.A[j] > arr.A[j+1]){
                Swap(&arr.A[j], &arr.A[j+1]);
                flag = 1;
            }
        }
        if(flag = 0){
            break;
        }
    }
}

int main(){
    printf("Bubble Sort in C Lang.\n");
    Array arr;
    arr = DefineArray();
    DisplayArray(arr);
    BubbleSort(arr);
    DisplayArray(arr);
}