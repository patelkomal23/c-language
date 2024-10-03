#include<stdio.h>

main(){
	// LENGTH OF ARRAY
	//a[0] = 3
	//a[1] = 7
	//a[2] = 1
	//a[3] = 8
	//a[4] = 6
	int i,len;
	int num=0;
	printf("Enter number of array :");
	scanf("%d",&len);
	int a[len];
	printf("Enter array element :\n");
	for(i=0;i<len;i++){
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
		num++;
	}
	printf("Length of array is : %d",num);
	
}
