#include <stdio.h>

union data{
	int a;
	double d;
	char c[2];
}d1,d2,d3,m[4];

int main(){
	printf("sizeof union :%u\n",sizeof(d1));
	d1.a = 0;
	d1.c[0]='a';
	d1.c[1]='b';
	printf("a=%d\nc[0]=%c\nc[1]=%c\n",d1.a,d1.c[0],d1.c[1]);
	m[0].a=4;
	m[1].c[0]='s';
	printf("%d\n%c\n%c\n",m[0].a,m[1].c[0],m[1].c[1]);
	return 0;
}
