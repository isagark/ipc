#include <stdio.h>

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))

struct data{
	int a;
	char name[4];
}students[10],data1;

int main(){
	printf("size of :%d",data1);
	printf("offsetoff a in structure: %d",OFFSETOF(data1,a));
	for(int i =0; i <=3; i++)
		scanf("%d%c",&students[i].a,&students[i].name[0]);
	for(int i =0; i <=3; i++)
		printf("%d\n%c\n",students[i].a,students[i].name[0]);
	return 0;
}
