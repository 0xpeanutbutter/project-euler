#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int palindrome(int n) {
    int n,r,sum=0,temp ;
    temp = n ;
    while(n>0) {
        r = n%10 ;
        sum = (sum*10)+r ;
        n = n/10 ;
    }
}

Node *multiples(int n) {
    Node *head = NULL;
    Node *temp = NULL;
    for(int i=100;i<=999;i++) {
        if(n%i==0) {
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = i;
            newNode->next = NULL;
            if(head==NULL) {
                head = newNode;
                temp = newNode;
            } else {
                temp->next = newNode;
                temp = newNode;
            }
        }
    }
    return head;
}

void main() {
    int i = 0 ;
    for(i=10000;i<998002;i+=1) {
        if(palindrome(i)==1) {
            Node *head = multiples(i);
            Node *temp = head;
            while(temp!=NULL) {
                if(temp->data%i==0) {
                    printf("%d\n",i);
                    break;
                }
                temp = temp->next;
            }
        }
    }
}