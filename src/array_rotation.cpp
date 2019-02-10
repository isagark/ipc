#include<iostream>
using namespace std;
int main()
{
  int i = 10, j = 0;
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};
  int temp[10];
  while(i >= 0){
    temp[j] = arr[i];
    j++;
    i--;
  }

  for(i=0;i<=10;i++){
    cout << temp[i] <<"\t";
  }

  return 0;
}
