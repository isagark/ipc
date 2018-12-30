#include<iostream>

typedef struct node* position;

using namespace std;

struct node{
	int data;
	position next;
};

class list{
	public:
		list();
		void delete_ll(position head);
		void add_node(int value,position* head);
		//delete_node(int value);
		//search_node(int value);
		void add_front(int value,position* head);
		void print_node(position* head);
};

list::list(){
	cout <<"created head pointer" << endl;
}

void list::delete_ll(position head){
	position cur = head;
	while(cur){
		position ptr = cur;
		cur = cur->next;
		delete ptr;
	}
}

void list::add_node(int value,position* head){
		position newnode = new node;
		*head = newnode;
		newnode->data = value;
		cout <<"in add_node: "<<newnode->data<<endl;
		newnode->next = NULL;
		
		position cur = *head;
		cout <<"in add node cur: "<<cur<<endl;
		while(cur){
			if(cur == NULL){
				cur->next = newnode;
				return;
			}
			cur = cur->next;
		}
}

void list::add_front(int value,position* head){
	position pos = new node;
	cout <<"pos address"<<pos<<endl;
	cout <<"value before storing in add_front:"<< value << endl;
	pos->data = value;
	cout <<"value stored is:"<<pos->data<<endl;
	pos->next = NULL;
	*head=pos;
	cout <<"head has "<<*head<<endl;
}

void list::print_node(position* head){
	position cur = *head;
	while(cur){
		cout << cur->data << " " ;
		cur = cur->next;
	}
	cout<<endl;
}

int main(){
	list* sl = new list;
	position head = NULL ;
	sl->add_front(5,&head);
	cout<<"head in main:"<<head<<endl;
	sl->add_node(10,&head);
	sl->print_node(&head);
	//sl->delete_ll(head);
	delete sl;
	return 0;
}




