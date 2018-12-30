#include <stdio.h>

enum days_week {sun=-9,mon,tue,wed=4,thu,fri=4,sat};

int main(){
	enum days_week day;
	day = sun;
	printf("%d\n",day);
	day = mon;
        printf("%d\n",day);
        day = tue;
        printf("%d\n",day);
	day = wed;
	printf("%d\n",day);
	day = thu;
	printf("%d\n",day);
	day = fri;
        printf("%d\n",day);
        day = sat;
        printf("%d\n",day);
	return 0;
}


