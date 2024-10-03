#include<stdio.h>

main(){
	int i,n,arr1[10],arr2[10],arr3[10];
	printf("Enter the size of the array :");
	scanf("%d",&n);
	printf("Enter the element of first array :\n");
	for(i=0;i<n;i++){
		printf("a[%d] =",i);
		scanf("%d",&arr1[i]);
	}
	printf("Enter the element of second array :\n");
	for(i=0;i<n;i++){
		printf("a[%d] =",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	printf("Third array element is : ");
	for(i=0;i<n;i++){
		printf("%d ",arr3[i]);
	}
	
}
