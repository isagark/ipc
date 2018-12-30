#include<stdio.h>

#define SWIFT(a) ((a & 0x0000FFFF)<<16)|((a & 0xFFFF0000)>>16)

int swap_nibbles(int a){
	return ((a & 0x0000FFFF)<<16)|((a & 0xFFFF0000)>>16);
}


int main(){

	int a = 0x11112222;
	printf("%X\n",a);
	int b = swap_nibbles(a);
	printf("%X\n",b);
	int c = SWIFT(b);
	printf("%X\n",c);
	return 0;
}
