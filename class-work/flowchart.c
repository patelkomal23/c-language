#include<stdio.h>

main(){
	int a,b,c;
	printf("First Number:");
	scanf("%d",&a);
	printf("Second Number:");
	scanf("%d",&b);	
	printf("Third Number:");
	scanf("%d",&c);	
	  if(a<b)
  {
    if(a<c)
    {
      printf("%d is the smallest",a);
    }
    else
    {
      printf("%d is the smallest",c);
    }
  }
  else
  {
    if(b<c)
    {
      printf("%d is the smallest",b);
    }
    else
    {
      printf("%d is the smallest",c);
    }
  }
}

