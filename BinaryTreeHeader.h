#ifndef HEADER_FILE
#define HEADER_FILE

struct node {
	struct node left*;
	struct node right*;
	char value;
}

int isLeaf(struct node *head) {
	if(head->left == NULL && head->right == NULL) {
		return 1;
	} else {
		return 0;
	}
}

void add(struct node *head, char value) {
	
	if(head == NULL) {
		head = malloc(sizeof(struct node));
		head->value = value;
	}
	
	if(value < head->value) {
		add(head->left, value);
	}
	if(value > head->value) {
		add(head->right, value);
	}
	
printf("Succesfully added %c to the tree. \n", value);
size++;
}
void addHelper(char value) {
	//add(the main root, value);    ?
}

int contains(char value) { //recursively search much like the add method.

return 0;
}

int size() {
	return size;
}

void inOrder(struct node *head) {
	inOrder(head->left);
	printf("%c ", head->value);
	inOrder(head->right);
}
void preOrder(struct node *head) {
	printf("%c ", head->value);
	preOrder(head->left);
	preOrder(head->right);
}
void postOrder(struct node *head) {
	preOrder(head->left);
	preOrder(head->right);	
	printf("%c ", head->value);
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
