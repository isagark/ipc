#include<stdio.h>

int main()
{
	int s;
	int ch = 1;
	int a = 0x11223344;
	printf("%X\n",a);
	void* b = &a;
	printf("Enter the byte you want to get\n");
	scanf("%d",&s);
	char* c = (char*) b;
	if(*(char* )&ch == 1){
		printf("system is big indian\n");
		if(s == 0)
			c += 3;
		else if(s == 1)
			c += 2;
		else if(s == 2)
			c += 1;
		else
			c += 0;
	}
	else{
		printf("System is little endian\n");
		if(s == 0)
                        c += 0;
                else if(s == 1)
                        c += 1;
                else if(s == 2)
                        c += 1;
                else    
                        c += 3;
	}
	printf("%X\n",*c);
	return 0;
}
