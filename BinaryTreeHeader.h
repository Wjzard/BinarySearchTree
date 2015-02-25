#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Binarytree {
	struct Binarytree *left;
	struct Binarytree *right;
	int data; //eventually change to a character.
};
typedef struct Binarytree node;
int size;

int isLeaf(node *tree) {
	if(tree->left == NULL && tree->right == NULL) {
		return 1;
	} else {
		return 0;
	}
}	

int getLeft(node *head) {
	return head->left;
}
int getRight(node *head) {
	return head->right;
}

int getSize() {
	return size;
}

void add(node **tree, int value) {
	node *head = NULL;
	
	if(*tree == NULL) {
		head = (node *)malloc(sizeof(node));
		
		head->left = NULL;
		head->right = NULL;
		head->data = value;
		
		//return;
	}
	
	if(value < (*tree)->data) {
		add(&(*tree)->left, value);
	}
	if(value > (*tree)->data) {
		add(&(*tree)->right, value);
	}		
	
	printf("Added %d. \n", value);
}


void preOrder(node *tree) {
	printf("%d ", tree->data);
	preOrder(tree->left);
	preOrder(tree->right);
}
void postOrder(node *tree) {
	preOrder(tree->left);
	preOrder(tree->right);
	printf("%d ", tree->data);
}
void inOrder(node *tree) {
	preOrder(tree->left);
	printf("%d ", tree->data);
	preOrder(tree->right);
}

//for InOrder,PreOrder,PostOrder. Output into array and display array
/***List of Methods, no idea which should contain arguements/return stuff***\
remove(char a)
removeHelper
searchParent
PreOrder(array)
PostOrder(array)
InOrder(array)
oneChild()
isAncestor()
printLevel()
*/



#endif
