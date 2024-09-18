#include<stdio.h>
main(){
	int a=3;
	int b=5;
	printf("%d\t%d\n",a,b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d\t%d",a,b);
	
}
