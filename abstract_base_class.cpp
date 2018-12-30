#include<iostream>
using namespace std;

class shape{
	protected:
		float d1,d2;
	public:
		void set_data(){
			cin>>d1;
			cout<<endl;
			cin>>d2;
		}
		virtual float area() = 0;
};

class square: public shape{
	public:
		float area(){
			return d1*d2;
		}
};

class triangle: public shape{
	public:
		float area(){
			return 0.5*d1*d2;
		}
};

int main(){
	square* sq = new square;
	sq->set_data();
	cout<<sq->area()<<endl;

	triangle* tri = new triangle;
	tri->set_data();
	cout<<tri->area()<<endl;

	shape* sh = new shape;
	return 0;
}
