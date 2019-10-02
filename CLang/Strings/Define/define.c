#include<stdio.h>

int lenOfString(char word[]){
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    printf("Define a string in C Lang\n");
    char fullname[] = "John Doe";
    printf("%s\n", fullname);
    int c = lenOfString(fullname);
    printf("%d\n", c);
    return 0;
}