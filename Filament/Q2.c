#include<stdio.h>

main(){
	
	char str[100],alpha;
	int i, count=0;
	
	printf("enter the string: ");
	scanf("%s",&str);
	
	for(alpha='a'; alpha<='z'; alpha++){  // outer loop for  character
		
		count = 0;
		
		for(i=0; str[i]!='\0'; i++){  // innerloop for  string and count
			if(alpha  == str[i]){
				count ++;
			}
		}
		
			if(count>0){
				printf("%c : %d\n",alpha,count);
			}
	}
}
