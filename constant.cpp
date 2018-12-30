#include <iostream>

using namespace std;

class A{
	private:
		mutable int x;
		mutable int y;
	public:
		A():x(0),y(0){
			cout << "Default constructor called" << endl;
		}

		A(int a ,int b):x(a),y(b){
			cout << "Parameterized constructor" << endl;
		}

		A(const A& a):x(a.x),y(a.y){
			cout << "Copy constructor called " << endl;
		}
	
		A& operator=(const A& a){
			x = a.x;
			y = a.y;
			cout << "Copy assignment operator " << endl;
		}

		~A(){
			cout << "Destructor called" << endl;
		}
	
		int getxInt() const{
			return x;
		}
		
		int getyInt() const{
			return y;
		}
		
		void setxInt(int X) const{
			x = X;
		}
		
		void setyInt(int Y) const{
			y = Y;
		}

};

int main(){
	A obj(10,100);
	const A obj1;
	const A obj2(20,25);
	cout << obj.getxInt() << endl;
	cout << obj1.getxInt() << endl;
	obj1.setxInt(5);
	obj1.setyInt(5);
	cout << obj1.getxInt() << "\t"<< obj1.getyInt() << endl;
	return 0;
}

