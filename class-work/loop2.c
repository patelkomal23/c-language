#include<stdio.h>
main(){
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a>0){
		printf("%d is a positive numer",a);
	}
	else if(a<0){
		printf("%d is a negative numer",a);
	}
	else{
		printf("%d is a neutal numer",a);
	}
}
