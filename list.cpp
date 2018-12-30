#include<iostream>
using namespace std;

typedef struct node* pos;

struct node{
	int data;
	pos next;
};

void init_node(pos head,int value){
	head->data = value;
	head->next = NULL;
}

void display(pos head) {
	pos list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

void add_node(pos head,int value){
	pos newnode = new node;
	newnode->data = value;
	newnode->next = NULL;
	
	pos cur = head;
	while(cur){
		if(cur->next == NULL){
			cur->next = newnode;
			return;
		}
		cur = cur->next;
	}
}

void insert_front(pos *head, int value){
	pos newnode = new node;
	newnode->data = value;
	newnode->next = *head;
	*head = newnode;
}

bool delete_node(pos *head,pos ptrdel){
	pos cur = *head;
	if(ptrdel == *head){
		*head = cur->next;
		delete ptrdel;
		return true;
	}
	while(cur){
		if(cur->next == ptrdel){
			cur->next = ptrdel->next;
			delete ptrdel;
			return true;
		}
		cur = cur->next;
	}
	return false;
	
}

pos search_node(pos head,int value){
	pos cur = head;
	while(cur){
		if(cur->data == value)
			return cur;
		cur = cur->next;
	}
	cout << "No node found with value" << value << endl;
}


int main(){
	pos newhead;
	pos head = new node;

	init_node(head,10);
	display(head);

	add_node(head,25);
	display(head);	

	insert_front(&head,35);
	display(head);

	int numDel = 10;
	pos ptrdelete = search_node(head,numDel);
	if(delete_node(&head,ptrdelete)) 
		cout << "Node "<< numDel << " deleted!\n";
	display(head);

	
	return 0;

}
