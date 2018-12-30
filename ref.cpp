#include <iostream>

using namespace std;

void add(int& a,int& b, int c){
	cout << "from main a = " << a << endl;
	cout << "from main b = " << b << endl;
	cout << "from main c = " << c << endl;
	a = b+c;
	cout << "from add a = " << a << endl;
	b = c+a;
	cout << "from add b = " << b << endl;
	c = a+b+c;
	cout << "from add c = " << c << endl;
}

int sub(int& a,int b, int& c){
	a = c - a;
	cout << "from sub a = " << a << endl;
	b = a - b;
	cout << "from sub b = " << a << endl;
	c = a + b + c;
	cout << "from sub c = " << a << endl;
	return b;
}

int main(){
int a = 20, b = 40, c = -10;
cout << "from main a = " << a << endl;
cout << "from main b = " << b << endl;
cout << "from main c = " << c << endl;
add(b,c,a);
cout << "after add" << endl;
cout << "from main a = " << a << endl;
cout << "from main b = " << b << endl;
cout << "from main c = " << c << endl;
a = sub(b,c,a);
cout << "from main a = " << a << endl;
cout << "from main b = " << b << endl;
cout << "from main c = " << c << endl;
cout << "a = " << a << "b = "<< b << "c = "<< c << endl;
return 0;
}
