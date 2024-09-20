#include<stdio.h>
main(){
	int i,sum,num;
	int f=0;
	int s=1;
	
	printf("Enter the number:");
	scanf("%d",&num);
	printf("%d %d ",f,s);
	for(i=0;i<=num;i++){
	sum=f+s;
	printf(" %d ",sum);
	f=s;
	s=sum;
	}	
	
}
