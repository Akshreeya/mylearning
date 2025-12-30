#include <stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void pop();
void push(int n);
void display();

int main(){
    int n;
    printf("enter num of max elements to inserted %d:",MAX);
    scanf("%d",&n);
    if(n>MAX){
        printf("stack overflow");
        return 0;
    }
    push(n);
    display();
    pop();
    display();
    return 0;
}

void push(int n){
    int val;
    printf("\nenter elemets:");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        stack[++top]=val;
    }
}

void pop(){
    if(top==-1){
        printf("stack is empty. cannot pop");
    }
    else{
        printf("\npop elemets is:%d",stack[top]);
        top--;
    }
    
}

void display(){
    printf("\nelements in the list:\n");
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}
