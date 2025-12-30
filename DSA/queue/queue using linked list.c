#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

int main(){
    int n,val;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("THE elements are:\n");
    for(int i=0;i<n;i++){
        struct node *newnode=malloc(sizeof(struct node));
        scanf("%d",&val);
        
        newnode->data=val;
        newnode->next=NULL;
        
        if(rear==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
    
    printf("the queue is:\n");
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
