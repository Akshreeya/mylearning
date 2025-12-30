#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node *createnode(int value) {
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

struct node *createtree() {
	int value;
	printf("enter node value(-1 if none):");
	scanf("%d",&value);
	if(value==-1) {
		return NULL;
	}
	struct node *root=createnode(value);
	printf("enter left child of %d\n",value);
	root->left=createtree();
	printf("enter right child of %d\n",value);
	root->right=createtree();

	return root;
}

void inorder(struct node *root) {
	if(root!=NULL) {
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}

void preorder(struct node *root) {
	if(root!=NULL) {
		printf("%d",root->data);
		inorder(root->left);
		inorder(root->right);
	}
}

void postorder(struct node *root) {
	if(root!=NULL) {
		inorder(root->left);
		inorder(root->right);
		printf("%d",root->data);
	}
}

int main() {
	struct node *root;

	printf("create binary tree\n");
	root=createtree();

	printf("inorder traversal\n");
	inorder(root);
	printf("\n");
	printf("preorder traversal\n");
	preorder(root);
	printf("\n");
	printf("postorder traversal\n");
	postorder(root);
	
}
