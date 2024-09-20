#include<stdio.h>

main(){
	int p,r,n;
	float si;
	printf("Enter the value of Amount:\n");
	scanf("%d",&p);
	printf("Enter the value of rate:\n");
	scanf("%d",&r);	
	printf("Enter the value of time:\n");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("Simple interest:%f",si);	
}
