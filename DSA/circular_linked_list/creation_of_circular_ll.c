#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head= NULL;

void append(int data){
	struct node *newnode= malloc(sizeof(struct node));
	newnode->data=data;

	if(head==NULL){
		head=newnode;
		newnode->next=head;
	}
	else{
		struct node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
}
void display(){
    if(head == NULL) return;

    struct node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
}


int main(){
	int n,data;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		if(data>0){
			append(data);
		}
	}
	display();
}
