#include<stdio.h>

main (){
	
	char str[100];
	int  i,length,j=0;
	
	printf("enter the string: ");
	scanf("%s",&str);
	
	for(length=0; str[length]!='\0'; length++);
	
	printf("the length is : %d\n",length);
	
	
	for(i=0;  i<length/2; i++){
		
		if(str[i] != str[length-i-1]){
		   j=1;  // false 
		   
		}	
	}
	
	if( j == 0){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
	
}
