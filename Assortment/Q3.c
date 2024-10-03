#include<stdio.h>
main(){
	int i,j,row,col;
 	printf("Enter the array's row size: ");
  	scanf("%d", &row);
  	printf("Enter the array's column size: ");
  	scanf("%d", &col);
	  
	int a[row][col];
   	int b[col][row];
   	
  	printf("Enter array's elements:\n");
  	for(i=0; i<row; i++){
  		for(j=0; j<col; j++){
  			printf("a[%d][%d] = ", i, j);
     		scanf("%d", &a[i][j]);
		  }
	  }
	  
	for(i=0; i<row; i++){
  		for(j=0; j<col; j++){
  		b[j][i] = a[i][j];
		  }
	  }
	  
	printf("The transpose matrix of the array:\n"); 
	for(i=0; i<col; i++){
  		for(j=0; j<row; j++){
  			  printf("%d ", b[i][j]);
		  }
		  printf("\n");
	  }
	  
}
