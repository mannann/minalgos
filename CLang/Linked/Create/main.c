#include<stdio.h>
#include<stdlib.h>

// Declaring a node
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node LinkedList(){
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->next = NULL;
    return p;
}

int main(){
    printf("Linked List in C Lang.\n");
    Node p = LinkedList();
    p->data = 12;
    
    printf("%d \n", p->data);
}