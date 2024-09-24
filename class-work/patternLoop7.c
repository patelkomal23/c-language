#include<stdio.h>
main(){
	//A
	//B A
	//C B A
	//D C B A
	//E D C B A
	int i,j;
	char c='A';
	for(i=1; i<=5; i++){
		for(j=1 ;j<=i; j++){
			printf(" %c ", 'A'+i-j);
			
		}
		printf("\n");
	}
}
