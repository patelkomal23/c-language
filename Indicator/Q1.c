#include<stdio.h>
#include<string.h>
int main(){
	 char str[100];
	 int i,count=0;
	 char *ptr;
	 printf("Enter Your string:");
	 gets(str);
	 for(i=0; str[i] != '\0'; i++){
	  	count++;	 	
	 }
	 printf("The length of a string is:%d",count);
}
