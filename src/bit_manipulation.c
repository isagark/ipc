#include<stdio.h>
int count_set(int num){
  int count = 0;
  while(num){
    count += num & 1;
    num >>= 1;
  }
  return count;
}

int main(){
  int num = 16;
  int count = 0;
  count = count_set(num);
  printf("%d",count);
  return 0;
}
