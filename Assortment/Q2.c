#include<stdio.h>
main(){
	int i,j,row,col,largest;
 	printf("Enter the array's row size: ");
  	scanf("%d", &row);
  	printf("Enter the array's column size: ");
  	scanf("%d", &col);
  	
  	int a[row][col];
  	printf("Enter array's elements:\n");
  	
  	for(i=0; i<row; i++){
  		for(j=0; j<col; j++){
  			printf("a[%d][%d] = ", i, j);
     		scanf("%d", &a[i][j]);
		  }
	  }
	  largest = a[i][j];
	  for(i=0; i<row; i++){
  		for(j=0; j<col; j++){
  		 if(a[i][j]>largest){
  		 		largest = a[i][j];
		   }
		  }
	  }
	 printf("The largest element is: %d\n", largest);
	 
}
