#include<stdio.h>
main(){
//1 0 1 0 1
//	0 1 0 1
//	  1 0 1
//	    0 1
//	      1
 int i,k,j,a;
	 
	  for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        
        for(j=5;j>=i;j--)
        {
         a=j%2;
         printf("%d ",a);   
        }
        printf("\n");
    }
    


}
