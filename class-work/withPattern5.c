#include<stdio.h>
main(){
//5 4 3 2 1
	//4 3 2 1
		//3 2 1
			//2 1
				//1
 int i,k,j;
	 
	 for(i=5;i<=1;i++){
	 	
	 	for(k=5;k<i;k++){
	 		printf(" ");
		 }
		 for(j=5;j>=i;j--){
		 	printf("%d",i);
		 }
		 printf("\n");
	 }


}
