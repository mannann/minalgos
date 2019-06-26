#include<stdio.h>
#include<math.h>

int primeVerTwo(int num){
    int mid;
    if (num == 1){
        return 0;
    }
    for(int j = 2; j < mid; j++){
        if (num % j == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num = 23;
    float temp = sqrt((float)num);
    printf("%f", temp);
    
   
}