#include<stdio.h>

int count_set(int num){
  int count = 0;
  while(num){
    count += num & 1;
    num >>= 1;
  }
  return count;
}

int set_bit(int num, int pos){
    num = num | (1 << pos);
    return num;
}

int clear_bit(int num, int pos){
  num = num & ~(1 << pos);
  return num;
}

int toggle_bit(int num, int pos){
  num = num ^ (1 << pos);
  return num;
}

int swap_nibbles(int num){
  return ((num & 0x0000ff00) << 8 | (num & 0x00fF0000) >> 8) | (num & 0xff000000) >> 24 | (num & 0x000000ff) << 24;
}

int main(){
  int num = 1;
  int x = 0xaabbccdd;
  int count = 0;
  count = count_set(num);
  int num2 = set_bit(num,3);
  int count2 = count_set(num2);
  printf("%d\n",count);
  printf("%d\n",num2);
  printf("%d\n",count2);
  int num3 = clear_bit(num,3);
  int count3 = count_set(num3);
  printf("%d\n",num3);
  printf("%d\n",count3);
  int num4 = toggle_bit(num,3);
  int count4 = count_set(num4);
  printf("%d\n",num4);
  printf("%d\n",count4);
  printf("%x\n",x);
  x = swap_nibbles(x);
  printf("%x\n",x);
  return 0;
}
