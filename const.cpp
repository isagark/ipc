#include<iostream>

using namespace std;

class A{
	public:
		A():test(0){
			x++;
			cout << "Constructor called" << endl;
		}
		
		A(int num):test(num){
			cout << "Parameterized constructor called" << endl;
		}

		int getInt () const{
			return test;
		 }
		
		void setInt(int num){
			test = num;
		}
		
		A(const A& a):test(a.test){ 
			cout << "Copy constructor called" << endl;
		}
		
		A& operator=(const A& a){
			if(this != &a){
				cout << "Copy assignment operator called" << endl;
        			test = a.test;
			}
			else
				cout << "Self copy HAHAHA...!!!" << endl;
			return *this;
		}

		~A(){
			cout << "destructor called" << endl;
		}

		static int x;	
	private:
		int test;
};

class B : public A{
private:
    
    static B* instance;
    
    B(){
        cout << "constructor is private" << endl;
    }
public:
    static B* getInstance();
};


B* B::instance = NULL;

B* B::getInstance(){
    if(instance == NULL)
        instance = new B;
    return instance;
}

int A::x = 0;

int main(){
	A* aa = new A;
	cout << aa->getInt() << endl;
	A obj;
	cout << obj.getInt() << endl;
	A obj2;
	obj2.setInt(99);
	obj = obj2;
	cout << obj.getInt() << endl;
	cout << obj2.getInt() << endl;
	const A obj3;
	cout << obj3.getInt() << endl;
	delete aa;
	cout << A::x << endl;
    B* b1 = B::getInstance();
    A* b2 = B::getInstance();
    cout << b1 << endl;
    cout << b2 << endl;
	return 0;
}
	


