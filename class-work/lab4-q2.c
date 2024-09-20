#include<stdio.h>
main(){
	int a=3;
	int b=16;
	printf("%d\t%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t%d",a,b);
	
}
