#include<stdio.h>
main(){
	
	//declaring variable
	int sum,n,first,last;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	//First digit
	last = n % 10;
	printf("\nLast number is :%d",last);
	
	//Applying while loop
	while(n>=10){
		
		n=n/10;		
	}
	first=n;
	printf("\nFirst number is :%d",first);
	
	//sum of a number's first and last digits.
	sum = first + last;
	printf("\nFirst and Last digit sum of : %d",sum);
}
