#include <stdio.h>
#define MAX 10

int queue[MAX];
int front=-1,rear=-1;

int main(){
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int val;
    if(n>MAX){
        printf("overflow");
        return 0;
    }
    front=0;
    printf("enter queue values:");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        queue[++rear]=val;
    }
    printf("queue values are:");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    return 0;
}
