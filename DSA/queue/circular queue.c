#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    if(front==NULL){
        front=rear=newnode;
        newnode->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void display(){
    if(front==NULL){
        printf("empty!");
        return;
    }
    struct node *temp=front;
    printf("the queue:");
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=front);
    printf("\n");
}

int main(){
    int n,val;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter queue elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        enqueue(val);
    }
    display();
    return 0;
}
