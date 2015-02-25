struct Node{
	int value;
	Node * next;
};
void add(Node * head, int value){
	Node * current = head;
	while(current->next!=NULL)
		current=current->next;
	malloc(sizeof(Node));
	Node temp;
	temp.value = value;
	current->next=&temp;//this 
	&temp = current->next //?
	
}
