#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head= NULL;

void append(int data){
	struct node *newnode= malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
}
void display(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

int main(){
	int n,data;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter data:");
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		if(data>0){
			append(data);
		}
	}
	printf("forward");
	display();
}
