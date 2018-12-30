#include <iostream>

typedef struct node* nnode;

using namespace std;

struct node{
	int data;
	nnode next;
};

nnode create_node(int data){
	nnode newNode = new node;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insert(nnode* head,int data){
	cout << "Inside insert to insert = "<< data << endl;
	nnode newNode = new node;
	newNode->next = NULL;
	newNode->data = data;
	if(*head != NULL)
		newNode->next = *head;
	*head = newNode;
	cout << "Exit Insert" << endl;	
}

void append(nnode* head, int data){
	cout << "Inside append to append = " << data << endl;
	nnode newNode = new node;
	nnode last = *head;
	newNode->data = data;
	newNode->next = NULL;
	if(NULL == *head){
		*head = newNode;
		return;
	}
	while(last->next != NULL)
		last = last->next;
	last->next = newNode;
	cout << "Exit from append " << endl;
	return;
}

int mid_data(nnode head){
	cout << "Inside MID_DATA" << endl;
	nnode curr1 = head;
	nnode curr2 = head;
	while(NULL != curr2->next){
		curr1 = curr1->next;
		curr2 = curr2->next->next;
	}
	return curr1->data;
}

void print_list(nnode head){
	cout << "Inside PRINTLIST" << endl;
	if(NULL == head)
		cout << "Empty list" << endl;
	else{
		nnode curr = head;
		while(NULL != head){
			cout << head->data << endl;
			head = head->next;
		}
	}
	cout <<"Exit PRINTLIST" << endl;
}

int main(){
	nnode head = NULL;
	append(&head,2000);
	append(&head,200);
	insert(&head,10);
	insert(&head,20);
	append(&head,1000);
	print_list(head);
	append(&head,30);
	append(&head,100);
	append(&head,1000);
	append(&head,1);
	print_list(head);
	cout << mid_data(head) << endl;
	return 0;
}
