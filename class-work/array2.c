#include<stdio.h>

main(){
	// FIND THE AVERAGE
	//a[0] = 12
	//a[1] = 42
	//a[2] = 18
	//a[3] = 50
	//a[4] = 26
	//Output: Average of an Array: 29.6
	int i,len;
	int sum=0;
	printf("Enter number of array :");
	scanf("%d",&len);
	int a[len];
	printf("Enter array element :\n");
	for(i=0;i<len;i++){
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum =sum/len;
	printf("Sum of array : %d",sum);
}
