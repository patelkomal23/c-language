#include<stdio.h>
#include<string.h>

main(){
//	uppercase
	char str[11]="hello world";
	printf("%s\n",strupr(str));
	
//	lowercase
	char lwr[11]="HELLO WORLD";
	printf("%s",strlwr(lwr));
	
//	toggler case
	char tog[11]="HelLo worLD";
}
