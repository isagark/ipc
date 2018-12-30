#include<iostream>

using namespace std;

class A{
	private:
		int a;
	public:	
		A();
		A(int x):a(x){}
		~A();
};

template <typename T>
T max_t(T x, T y){
	return x > y ? x : y;
}

int main(){
	A aa(100),bb(300);
	A cc;
	int a = 9, b = 99, iMax;
	double c = 9.99999, d = 12.66666, dMax;
	iMax = max_t<int>(a,b);
	cout << iMax << endl;
	dMax = max_t(c,d);
	cc = max_t(aa,bb);
	cout << dMax << endl;
	return 0;
} 
