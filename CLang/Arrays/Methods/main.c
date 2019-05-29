#include<stdio.h>
#include<stdlib.h>

typedef struct Array{
    int *A;
    int len, size;
}Array;

Array defineArray(){
    Array arr;
    arr.size = 10;
    arr.len = 10;
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    printf("Enter the elements : \n");
    for(int i = 0; i < arr.len; i++){
        printf("> ");
        scanf("%d", &arr.A[i]);
    }
    return arr;
}

// Increase Size

void increaseArraySize(Array *arr){
    int *p;
    p = (int *)malloc(sizeof(int) * arr->size * 2);
    arr->size = arr->size * 2;
    for(int i = 0; i < arr->len; i++){
        p[i] = arr->A[i];
    }
    free(arr->A);
    arr->A = p;
    p = NULL;
}

// Display Elements in Array.
void displayArray(Array arr){
    for(int i = 0; i < arr.len; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}


// Insert at end
void insertAtEnd(Array *arr, int num){
   if (arr->len == arr->size){
      increaseArraySize(arr);
   }
   arr->A[arr->len++] = num;
}

void insertAtBegin(Array *arr, int num){
    if(arr->len == arr->size){
        increaseArraySize(arr);
    }
    for(int i = arr->len; i > -1; i--){
        arr->A[i+1] = arr->A[i];
    }
    arr->A[0] = num;
    arr->len++;
}

int main(){
    printf("Array Declaration in C.\n");
    Array arr;
    arr = defineArray();
    displayArray(arr);
    insertAtEnd(&arr, 11);
    insertAtEnd(&arr, 12);
    insertAtEnd(&arr, 13);
    insertAtEnd(&arr, 14);
    insertAtEnd(&arr, 15);
    displayArray(arr);
    printf("Len\t:%d \n", arr.len);
    printf("Size\t:%d \n", arr.size);
    insertAtBegin(&arr, 0);
    displayArray(arr);
    printf("Len\t:%d \n", arr.len);
    printf("Size\t:%d \n", arr.size);
}