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

size++;
}
void addHelper(char value) {
	//add(the main root, value);    ?
}

//for InOrder,PreOrder,PostOrder. Output into array and display array
/***List of Methods, no idea which should contain arguements/return stuff***\
remove(char a)
removeHelper
searchParent
PreOrder(array)
PostOrder(array)
InOrder(array)
contains(char a)
oneChild()
isAncestor()
printLevel()
*/

int size() {
	return size;
}


#endif
