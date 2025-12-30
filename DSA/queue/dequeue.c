#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=0,rear=-1;
int main(){
    int n;
    printf("enter number of elements to insert(max %d): ",MAX);
    scanf("%d",&n);
    if(n>MAX){
        printf("queue overflow! too many elements\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&queue[i]);
        rear++;
    }
    if(front>rear){
        printf("queue underflow! no element to delete\n");
    }else{
        printf("\ndelete element: %d\n",queue[front]);
        front++;
    }
    printf("\nqueue after dequeue:\n");
    if(front>rear){
        printf("queue is empty");
    }else{
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
    return 0;
}
