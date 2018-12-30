#include <iostream>

typedef int (*funcptr)(int,int);

using namespace std;

int add(int i_var1,int i_var2){
	return i_var1 + i_var2;
}

int sub(int i_var1,int i_var2){
	return i_var1 - i_var2;
}

int main(){
	funcptr fun_ptr[2] = {add,sub};
	cout << fun_ptr[0](10,10) << endl;
	cout << fun_ptr[1](10,5) << endl;
	return 0;
}
