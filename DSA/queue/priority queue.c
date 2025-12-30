#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int priority;
    struct node *next;
};
struct node *front=NULL;

void enqueue(int data,int priority){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next=NULL;
    
    if(front==NULL||priority<front->priority){
        newnode->next=front;
        front=newnode;
    }
    else{
        struct node *temp=front;
        while(temp->next!=NULL && temp->next->priority<=priority){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void display(){
    if(front==NULL){
        printf("empty!");
        return;
    }
    struct node *temp=front;
    printf("the queue with priority:\n");
    while(temp!=NULL){
        printf("v:%d,p:%d ",temp->data,temp->priority);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    int n,val,priority;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter queue elements:\n");
    for(int i=0;i<n;i++){
        printf("value:");
        scanf("%d",&val);
        printf("priority:");
        scanf("%d",&priority);
        enqueue(val,priority);
    }
    display();
    return 0;
}
