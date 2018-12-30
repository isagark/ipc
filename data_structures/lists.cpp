#include <iostream>
using namespace std;
typedef struct node* pos;

 
struct node{
	int data;
	pos next;
};

class list{
	public:
		void init_node(pos* head_ref);
		void add_front(pos* head_ref,int value);
		void add_tail(pos* head_ref,int value);
		void add_pos(pos* head_ref,int value,int position);
		void delete_list();
		//void delete_pos();
		void print_list(pos* head);
		int getListCount(pos* head);
		int checkData(pos* head,int key);
};
int checkData(pos* head,int key){
	int count = 0;
	pos cur = *head;
	while(cur){
		if(key == cur->data)
			count++;
		cur=cur->next;
	}
	return count;
}

int getListCount(pos* head){
	int count = 0;
	pos cur = *head;
	while(cur){
		cur=cur->next;
		count++;
	}
	return count;
}

void delete_list(pos* head){
	pos temp;
	while(temp){
		temp = *head;
		*head = temp->next;
		delete temp;
	}
	*head = NULL;
}

void add_pos(pos* head_ref,int value,int position){
	pos new_node = new node;
	pos cur = *head_ref;
	new_node->data = value;
	for(int i=0;i<position-1;i++)
		cur=cur->next;
	new_node->next = cur->next;
	cur->next = new_node;
}

void init_node(pos* head_ref){
	*head_ref = NULL;
}

void add_front(pos* head_ref, int value){
	pos new_node = new node;
	new_node->data = value;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void add_tail(pos* head_ref,int value){
	pos new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	pos temp = *head_ref;
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next = new_node;
	return;
}

void print_list(pos* head){
	pos temp = *head;
	while(temp){	
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	pos head;
	init_node(&head);
	add_front(&head,5);
	print_list(&head);
	add_front(&head,10);
	print_list(&head);
	add_tail(&head,25);
	print_list(&head);
	add_tail(&head,35);
	add_tail(&head,90);
	add_tail(&head,45);
	print_list(&head);
	add_front(&head,90);
	print_list(&head);	
	add_pos(&head,99,1);
	print_list(&head);
	cout << checkData(&head,90) << endl;
	cout << endl;
	cout << getListCount(&head) << endl;
	return 0;
}

