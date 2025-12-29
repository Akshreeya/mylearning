#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;;
void insert(int data)
{
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
   
}
void display()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,data;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        if(data>0)
        {
            insert(data);
        }
    }
    display();
    return 0;
}
