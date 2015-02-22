#include "BinaryTreeHeader.h"

int main() {
	//int size = 0;
	node *head = malloc(sizeof(node));
	int array[] = {7,3,1,9,2,5,0,4,8,6};
	
	int i;
	for(i=0;i<10;i++) {
		add(&head,array[i]);
	}


return 0;
}
