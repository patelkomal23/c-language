#include<stdio.h>
main(){
	
	//declaring variable
	 int n,count=0;
	 
	 printf("Enter Number:");
	 scanf("%d",&n);
	 
	//Applying while loop
	 while(n>0){
	 	n = n/10;
	 	count++;
	 }
	 
	//result
	 printf("\n Total Number of Digit is : %d",count);
}
