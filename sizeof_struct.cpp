#include <iostream>

#define OFFSETOFFF(type,element) ((size_t) &((type*)0)->element)

using namespace std;

struct data{
	int num;
	char name[10];
	int num1;
};

int main(){
	struct data data1;
	cout << OFFSETOFFF(data,num1) << endl;
	cout << sizeof(data1) << endl;
};
