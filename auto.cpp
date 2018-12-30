#include <iostream>
using namespace std;
int main(){
	int aa = 3;
	vector <int> a={3,1,2,3,4,5,6};
	//vector<int>::iterator i ("this is compltely replaced with auto")
	auto i = find(a.begin(),a.end(),4);
	cout << i << endl;
	return 0;
}
