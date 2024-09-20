#include<stdio.h>

main(){
	//declaring variable
	char c = 'a';
	
	//Applying do-while loop
	do{
		printf(" %c ",c);
		c = c + 4;
		
	}while(c <= 'z');
}
