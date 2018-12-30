#include <iostream>

using namespace std;

#define OFFSETOFF(type,element) ((size_t)& ((type* )0)->element)

#define SIZEOFF(type) (char*) (&type+1) - (char*) (&type)

struct just{
	int a;
	char b;
	int c;
};

int main(){
	int a;
	just xyz;
	cout << OFFSETOFF(just,c) << endl;
	cout << SIZEOFF(a) << endl;	
	return 0;
}
