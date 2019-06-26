#include<stdio.h>
#include<time.h>
#include<math.h>

int primeVerOne(int num){
    if (num == 1){
        return 0;
    }
    for(int j = 2; j < num; j++){
        if (num % j == 0){
            return 0;
        }
    }
    return 1;
}

int primeVerTwo(int num){
    int mid;
    if (num == 1){
        return 0;
    }
    
    mid = (int)(floor(sqrt((float)num))) + 1;
    
    for(int j = 2; j < mid; j++){
        if (num % j == 0){
            return 0;
        }
    }
    return 1;
}

int primeVerThree(int num){
    int mid;
    if (num == 1){
        return 0;
    }
    if (num == 2){
        return 1;
    }
    if (num > 2 && num % 2 == 0){
        return 0;
    }
    mid = (int)(floor(sqrt((float)num))) + 1;
    
    for(int j = 3; j < mid; j = j + 2){
        if (num % j == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    printf("Prime numbers in C Lang.\n");
    double diff;
    time_t start, end;
    int list = 100000;
    start = clock();
    for(int i = 1; i < list; i++){
        // printf("%d - %d\n", i, primeVerOne(i));
        // primeVerOne(i);
        // primeVerTwo(i);
        primeVerThree(i);
    }
    end = clock();
    diff = end - start;
    printf("%f \n", diff);
}