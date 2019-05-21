#include<stdio.h>
#include<stdlib.h>


typedef struct Array{
    int *A;
    int len, size;
}Array;


Array DefineArray(){
    Array arr;
    int dec = 1;
    printf("Enter the size of array. : ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    while(dec == 1){
        printf("Enter the length of array : ");
        scanf("%d", &arr.len);
        if(arr.len > arr.size){
            arr.len = 0;
            printf("Array length is out of range.\n");
            printf("Enter length below array size.\n");
        }else{
            break;
        }
    }
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

int BinarySearch(Array arr, int min, int max,int num){
    if(min <= max){
        int mid = (min + max) / 2;
        if(arr.A[mid] == num){
            return 1;
        }
        if(arr.A[mid] > num){
            return BinarySearch(arr, min, mid-1, num);
        }else{
            return BinarySearch(arr, mid+1, max, num);
        }
    }
    return 0;
}

int main(){
    printf("Bubble Sort in C Lang.\n");
    Array arr;
    arr = DefineArray();
    InsertionSort(arr);
    DisplayArray(arr);
    int res = BinarySearch(arr,0, arr.len, 10);
    if(res == 1){
        printf("Found Number.\n");
    }else{
        printf("Not Found. \n");
    }
}