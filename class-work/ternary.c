#include<stdio.h>
main ()
{
  	int a,b,c;
  	printf("First Number:");
	scanf("%d",&a);
	printf("Second Number:");
	scanf("%d",&b);	
	printf("Third Number:");
	scanf("%d",&c);	

  	a <= b ? a <= c ? printf("%d is the minimum",a) : printf("%d is the minimum",c) :b <= c ? printf("%d is the minimum",b) : printf("%d is the minimum",c);
} 
