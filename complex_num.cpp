#include <iostream>
using namespace std;
class Complex{
	private:
		float real;
		float img;
	public:
		Complex():real(0),img(0){}		

		Complex(float real_,float img_):real(real_),img(img_){
			cout<<"constructor called"<<endl;
		}
		~Complex(){
			cout<<"destructor called"<<endl;
		}
		Complex operator+ (const Complex& a){
			return Complex(a.real+this->real,a.img+this->img);
		}

		Complex& operator= (const Complex& a){
			cout<<"Copy constructor called"<<endl;
			if(this != &a){
				real = a.real;
				img = a.img;	
			}
			else
				cout << a <<"="<< a << endl;
			return *this;
		}
		
		friend std::ostream& operator<< (std::ostream& os,const Complex& c){
			os << c.real << "+" << c.img <<"i";
			return os;
		}

		void print_complex(){
			cout <<real<<"+"<<img<<"i"<<endl;
		}
};
int main(){
	Complex a(2,3);
	a.print_complex();
	Complex b(5,6);
	a = b;
	a = a;
	cout << a << endl;
	cout << b << endl;
 	Complex c; 
	c= a+b;
	cout << c << endl;
	return 0;			
}


