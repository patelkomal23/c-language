

#include<stdio.h>
main(){
	int n1,n2,n3;
	float avg;
	printf("Enter marks of subject 1:" ,n1);
	scanf("%d",&n1);
	printf("Enter marks of subject 2:" ,n2);
	scanf("%d",&n2);
	printf("Enter marks of subject 3:" ,n3);
	scanf("%d",&n3);
	avg = (n1+n2+n3)/3;		
	printf("Enter average: %f" ,avg);
	if(avg>90){
		printf("you have secured A grade");
	}
	else if((avg>80) && (avg<90))
	{
		printf("you have secured B grade");	
	}
	else if((avg>70) && (avg<80))
	{
		printf("you have secured C grade");	
	}	
	else if((avg>60) && (avg<70))
	{
		printf("you have secured D grade");	
	}	
	else{
		printf("you are failed");
	}	
}
