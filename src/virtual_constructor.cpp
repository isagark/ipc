#include<iostream>
using namespace std;

class A{
public:
	A(){ cout<<"A constructor called"<< endl; }

	~A(){ cout<<"A destructor called"<<endl; }

	A(const A& obj){
		cout<<"Copy constructor called"<<endl;
	}

	A* operator=(const A& obj){
		cout<<"Copy operator called"<<endl;
	}
};


int main()
{
	A obj1;
	A obj2 = obj1;
	return 0;
}
