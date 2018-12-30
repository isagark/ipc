#include <iostream>

typedef struct node* pos;

struct node{
	int data;
	pos next;
};

using namespace std;

class stack{
	private:
		//pos top;
	public:
		pos top;
		stack();
		~stack();
		void push(int);
		int pop();
		int peek();	
		void display(stack& );
};

stack::stack(){
	cout << "stack created" << endl;
	top = NULL;
	cout << top << endl;
}

stack::~stack(){
	while(top){
		pos tmp = top;
		cout << top << endl;
		top = top->next;
		cout << top << endl;
		cout << tmp << endl;
		delete tmp;
	}
}

void stack::push(int n){
	pos ptr = new node;
	ptr->next = top;
	cout << ptr->next << endl;
	ptr->data = n;
	cout << ptr->data << endl;
	top = ptr;
	cout << top << endl;
}

int stack::pop(){
	pos tmp = top;
	int val = top->data;
	top = top->next;
	delete tmp;
	return val;
}

int stack::peek(){
	return top->data;
}

void display(stack& s)
{
        pos cur = s.top;
        while(cur){
	        cout << cur->data << " " ;
                cur = cur->next;
     	        }
      	cout<<endl;
}

int main(){
	stack* st = new stack();
	st->push(10);
	st->push(20);
	st->push(30);
	st->push(40);
	display(*st);
	st->pop();
	st->pop();
	st->pop();
	display(*st);
	cout << "current top :" << st->peek() ;
	delete st;
	return 0;
}


